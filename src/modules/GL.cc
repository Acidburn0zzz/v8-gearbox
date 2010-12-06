
#include <GL/glut.h>
#include <GL/gl.h>

#include "GL.h"
#include "../shell.h"

static bool bGLIsUsed = false;
v8::Local<v8::Value> pGlutRedrawFunc;
v8::Local<v8::Value> pGlutKeyPressFunc;
v8::Local<v8::Value> pGlutKeyUpFunc;
v8::Local<v8::Value> pGlutMouseMoveFunc;
v8::Local<v8::Value> pGlutResizeFunc;

void GLProxyDisplayFunc() {
    V8FuncCall0(v8::Object::New(), pGlutRedrawFunc);
}
void GLProxyKeyboardFunc(unsigned char key, int x, int y) {
    V8FuncCall(v8::Object::New(), pGlutKeyPressFunc, v8::Integer::New(key), v8::Integer::New(x), v8::Integer::New(y));
}
void GLProxyKeyboardUpFunc(unsigned char key, int x, int y) {
    V8FuncCall(v8::Object::New(), pGlutKeyUpFunc, v8::Integer::New(key), v8::Integer::New(x), v8::Integer::New(y));
}
void GLProxyMotionFunc(int x, int y) {
    V8FuncCall(v8::Object::New(), pGlutMouseMoveFunc, v8::Integer::New(x), v8::Integer::New(y));
}
void GLProxyReshapeFunc(int w, int h) {
    V8FuncCall(v8::Object::New(), pGlutResizeFunc, v8::Integer::New(w), v8::Integer::New(h));
}

#define CLIP(x, a, b) ((x) < (a) ? (a) : ((x) > (b) ? (a) : (x)))

V8FuncDef(global_GL_initWindow)
{
    if(args.Length() >= 3)
    {
        if(bGLIsUsed)
            V8Throw("GL is already being used");
        int argc = 0;
        glutInit(&argc, 0);
        glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
        glutInitWindowSize(args[1]->IntegerValue(), args[2]->IntegerValue());
        glutCreateWindow((*v8::String::Utf8Value(args[0])));
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.initWindow");
}

V8FuncDef(global_GL_mainLoop)
{
    if(args.Length() >= 1)
    {
        pGlutRedrawFunc = args[0]->ToObject()->V8Get("redraw");
        glutDisplayFunc(GLProxyDisplayFunc);
        
        pGlutKeyPressFunc = args[0]->ToObject()->V8Get("keyPress");
        glutKeyboardFunc(GLProxyKeyboardFunc);
        
        pGlutKeyUpFunc = args[0]->ToObject()->V8Get("keyUp");
        glutKeyboardUpFunc(GLProxyKeyboardUpFunc);
        
        pGlutMouseMoveFunc = args[0]->ToObject()->V8Get("mouseMove");
        glutMotionFunc(GLProxyMotionFunc);
        glutPassiveMotionFunc(GLProxyMotionFunc);
        
        pGlutResizeFunc = args[0]->ToObject()->V8Get("resize");
        glutReshapeFunc(GLProxyReshapeFunc);
        
        glutMainLoop();
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.mainLoop");
}

V8FuncDef(global_GL_clear)
{
    if(args.Length() >= 4)
    {
        glClearColor(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        return v8::Undefined();
    }

    if(args.Length() >= 1)
    {
        glClearColor(args[0]->ToObject()->V8Get("r")->NumberValue(), args[0]->ToObject()->V8Get("g")->NumberValue(), args[0]->ToObject()->V8Get("b")->NumberValue(), args[0]->ToObject()->V8Get("a")->NumberValue());
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.clear");
}

V8FuncDef(global_GL_warpPointer)
{
    if(args.Length() >= 2)
    {
        glutWarpPointer(args[0]->IntegerValue(), args[1]->IntegerValue());
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.warpPointer");
}

V8FuncDef(global_GL_disableCursor)
{
    glutSetCursor(GLUT_CURSOR_NONE);
    return v8::Undefined();
}

V8FuncDef(global_GL_enableDepthTest)
{
    glEnable(GL_DEPTH_TEST);
    return v8::Undefined();
}

V8FuncDef(global_GL_enableLighting)
{
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    return v8::Undefined();
}

V8FuncDef(global_GL_disableLighting)
{
    glDisable(GL_LIGHTING);
    glDisable(GL_LIGHT0);
    return v8::Undefined();
}

V8FuncDef(global_GL_flush)
{
    glFlush();
    glutSwapBuffers();
    return v8::Undefined();
}

V8FuncDef(global_GL_needsRedraw)
{
    glutPostRedisplay();
    return v8::Undefined();
}

V8FuncDef(global_GL_bitmapCharacter)
{
    if(args.Length() >= 1)
    {
        if(v8::String::Utf8Value(args[0]).length() == 1)
            glutBitmapCharacter(GLUT_BITMAP_9_BY_15, (*v8::String::Utf8Value(args[0]))[0]);
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.bitmapCharacter");
}

V8FuncDef(global_GL_loadIdentity)
{
    glLoadIdentity();
    return v8::Undefined();
}

V8FuncDef(global_GL_viewport)
{
    if(args.Length() >= 4)
    {
        glViewport(args[0]->IntegerValue(), args[1]->IntegerValue(), args[2]->IntegerValue(), args[3]->IntegerValue());
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.viewport");
}

V8FuncDef(global_GL_matrixModeProjection)
{
    glMatrixMode(GL_PROJECTION);
    return v8::Undefined();
}

V8FuncDef(global_GL_matrixModeModelView)
{
    glMatrixMode(GL_MODELVIEW);
    return v8::Undefined();
}

V8FuncDef(global_GL_pushMatrix)
{
    glPushMatrix();
    return v8::Undefined();
}

V8FuncDef(global_GL_popMatrix)
{
    glPopMatrix();
    return v8::Undefined();
}

V8FuncDef(global_GL_perspective)
{
    if(args.Length() >= 4)
    {
        gluPerspective(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.perspective");
}

V8FuncDef(global_GL_ortho2D)
{
    if(args.Length() >= 4)
    {
        gluOrtho2D(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.ortho2D");
}

V8FuncDef(global_GL_lookAt)
{
    if(args.Length() >= 9)
    {
        gluLookAt(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue(), args[4]->NumberValue(), args[5]->NumberValue(), args[6]->NumberValue(), args[7]->NumberValue(), args[8]->NumberValue());
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.lookAt");
}

V8FuncDef(global_GL_translate)
{
    if(args.Length() >= 3)
    {
        glTranslated(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.translate");
}

V8FuncDef(global_GL_scale)
{
    if(args.Length() >= 3)
    {
        glScaled(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.scale");
}

V8FuncDef(global_GL_rotate)
{
    if(args.Length() >= 4)
    {
        glRotated(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.rotate");
}

V8FuncDef(global_GL_color)
{
    if(args.Length() >= 4)
    {
        glColor4d(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
        return v8::Undefined();
    }

    if(args.Length() >= 3)
    {
        glColor3d(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.color");
}

V8FuncDef(global_GL_beginPolygon)
{
    glBegin(GL_POLYGON);
    return v8::Undefined();
}

V8FuncDef(global_GL_beginTriangles)
{
    glBegin(GL_TRIANGLES);
    return v8::Undefined();
}

V8FuncDef(global_GL_beginTriangleStrip)
{
    glBegin(GL_TRIANGLE_STRIP);
    return v8::Undefined();
}

V8FuncDef(global_GL_end)
{
    glEnd();
    return v8::Undefined();
}

V8FuncDef(global_GL_vertex)
{
    if(args.Length() >= 3)
    {
        glVertex3d(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.vertex");
}

V8FuncDef(global_GL_normal)
{
    if(args.Length() >= 3)
    {
        glNormal3d(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.normal");
}

V8FuncDef(global_GL_rasterPos)
{
    if(args.Length() >= 2)
    {
        glRasterPos2d(args[0]->NumberValue(), args[1]->NumberValue());
        return v8::Undefined();
    }
    V8Throw("Invalid call to GL.rasterPos");
}


void SetupGL(v8::Handle<v8::Object> global)
{
    v8::Handle<v8::Object> global_GL = v8::Object::New();
    global->V8Set("GL", global_GL);
    v8::Handle<v8::Function> global_GL_initWindow = V8Func(global_GL_initWindow)->GetFunction();
    global_GL_initWindow->SetName(v8::String::New("initWindow"));
    global_GL->V8Set("initWindow", global_GL_initWindow);
    v8::Handle<v8::Function> global_GL_mainLoop = V8Func(global_GL_mainLoop)->GetFunction();
    global_GL_mainLoop->SetName(v8::String::New("mainLoop"));
    global_GL->V8Set("mainLoop", global_GL_mainLoop);
    v8::Handle<v8::Function> global_GL_clear = V8Func(global_GL_clear)->GetFunction();
    global_GL_clear->SetName(v8::String::New("clear"));
    global_GL->V8Set("clear", global_GL_clear);
    v8::Handle<v8::Function> global_GL_warpPointer = V8Func(global_GL_warpPointer)->GetFunction();
    global_GL_warpPointer->SetName(v8::String::New("warpPointer"));
    global_GL->V8Set("warpPointer", global_GL_warpPointer);
    v8::Handle<v8::Function> global_GL_disableCursor = V8Func(global_GL_disableCursor)->GetFunction();
    global_GL_disableCursor->SetName(v8::String::New("disableCursor"));
    global_GL->V8Set("disableCursor", global_GL_disableCursor);
    v8::Handle<v8::Function> global_GL_enableDepthTest = V8Func(global_GL_enableDepthTest)->GetFunction();
    global_GL_enableDepthTest->SetName(v8::String::New("enableDepthTest"));
    global_GL->V8Set("enableDepthTest", global_GL_enableDepthTest);
    v8::Handle<v8::Function> global_GL_enableLighting = V8Func(global_GL_enableLighting)->GetFunction();
    global_GL_enableLighting->SetName(v8::String::New("enableLighting"));
    global_GL->V8Set("enableLighting", global_GL_enableLighting);
    v8::Handle<v8::Function> global_GL_disableLighting = V8Func(global_GL_disableLighting)->GetFunction();
    global_GL_disableLighting->SetName(v8::String::New("disableLighting"));
    global_GL->V8Set("disableLighting", global_GL_disableLighting);
    v8::Handle<v8::Function> global_GL_flush = V8Func(global_GL_flush)->GetFunction();
    global_GL_flush->SetName(v8::String::New("flush"));
    global_GL->V8Set("flush", global_GL_flush);
    v8::Handle<v8::Function> global_GL_needsRedraw = V8Func(global_GL_needsRedraw)->GetFunction();
    global_GL_needsRedraw->SetName(v8::String::New("needsRedraw"));
    global_GL->V8Set("needsRedraw", global_GL_needsRedraw);
    v8::Handle<v8::Function> global_GL_bitmapCharacter = V8Func(global_GL_bitmapCharacter)->GetFunction();
    global_GL_bitmapCharacter->SetName(v8::String::New("bitmapCharacter"));
    global_GL->V8Set("bitmapCharacter", global_GL_bitmapCharacter);
    v8::Handle<v8::Function> global_GL_loadIdentity = V8Func(global_GL_loadIdentity)->GetFunction();
    global_GL_loadIdentity->SetName(v8::String::New("loadIdentity"));
    global_GL->V8Set("loadIdentity", global_GL_loadIdentity);
    v8::Handle<v8::Function> global_GL_viewport = V8Func(global_GL_viewport)->GetFunction();
    global_GL_viewport->SetName(v8::String::New("viewport"));
    global_GL->V8Set("viewport", global_GL_viewport);
    v8::Handle<v8::Function> global_GL_matrixModeProjection = V8Func(global_GL_matrixModeProjection)->GetFunction();
    global_GL_matrixModeProjection->SetName(v8::String::New("matrixModeProjection"));
    global_GL->V8Set("matrixModeProjection", global_GL_matrixModeProjection);
    v8::Handle<v8::Function> global_GL_matrixModeModelView = V8Func(global_GL_matrixModeModelView)->GetFunction();
    global_GL_matrixModeModelView->SetName(v8::String::New("matrixModeModelView"));
    global_GL->V8Set("matrixModeModelView", global_GL_matrixModeModelView);
    v8::Handle<v8::Function> global_GL_pushMatrix = V8Func(global_GL_pushMatrix)->GetFunction();
    global_GL_pushMatrix->SetName(v8::String::New("pushMatrix"));
    global_GL->V8Set("pushMatrix", global_GL_pushMatrix);
    v8::Handle<v8::Function> global_GL_popMatrix = V8Func(global_GL_popMatrix)->GetFunction();
    global_GL_popMatrix->SetName(v8::String::New("popMatrix"));
    global_GL->V8Set("popMatrix", global_GL_popMatrix);
    v8::Handle<v8::Function> global_GL_perspective = V8Func(global_GL_perspective)->GetFunction();
    global_GL_perspective->SetName(v8::String::New("perspective"));
    global_GL->V8Set("perspective", global_GL_perspective);
    v8::Handle<v8::Function> global_GL_ortho2D = V8Func(global_GL_ortho2D)->GetFunction();
    global_GL_ortho2D->SetName(v8::String::New("ortho2D"));
    global_GL->V8Set("ortho2D", global_GL_ortho2D);
    v8::Handle<v8::Function> global_GL_lookAt = V8Func(global_GL_lookAt)->GetFunction();
    global_GL_lookAt->SetName(v8::String::New("lookAt"));
    global_GL->V8Set("lookAt", global_GL_lookAt);
    v8::Handle<v8::Function> global_GL_translate = V8Func(global_GL_translate)->GetFunction();
    global_GL_translate->SetName(v8::String::New("translate"));
    global_GL->V8Set("translate", global_GL_translate);
    v8::Handle<v8::Function> global_GL_scale = V8Func(global_GL_scale)->GetFunction();
    global_GL_scale->SetName(v8::String::New("scale"));
    global_GL->V8Set("scale", global_GL_scale);
    v8::Handle<v8::Function> global_GL_rotate = V8Func(global_GL_rotate)->GetFunction();
    global_GL_rotate->SetName(v8::String::New("rotate"));
    global_GL->V8Set("rotate", global_GL_rotate);
    v8::Handle<v8::Function> global_GL_color = V8Func(global_GL_color)->GetFunction();
    global_GL_color->SetName(v8::String::New("color"));
    global_GL->V8Set("color", global_GL_color);
    v8::Handle<v8::Function> global_GL_beginPolygon = V8Func(global_GL_beginPolygon)->GetFunction();
    global_GL_beginPolygon->SetName(v8::String::New("beginPolygon"));
    global_GL->V8Set("beginPolygon", global_GL_beginPolygon);
    v8::Handle<v8::Function> global_GL_beginTriangles = V8Func(global_GL_beginTriangles)->GetFunction();
    global_GL_beginTriangles->SetName(v8::String::New("beginTriangles"));
    global_GL->V8Set("beginTriangles", global_GL_beginTriangles);
    v8::Handle<v8::Function> global_GL_beginTriangleStrip = V8Func(global_GL_beginTriangleStrip)->GetFunction();
    global_GL_beginTriangleStrip->SetName(v8::String::New("beginTriangleStrip"));
    global_GL->V8Set("beginTriangleStrip", global_GL_beginTriangleStrip);
    v8::Handle<v8::Function> global_GL_end = V8Func(global_GL_end)->GetFunction();
    global_GL_end->SetName(v8::String::New("end"));
    global_GL->V8Set("end", global_GL_end);
    v8::Handle<v8::Function> global_GL_vertex = V8Func(global_GL_vertex)->GetFunction();
    global_GL_vertex->SetName(v8::String::New("vertex"));
    global_GL->V8Set("vertex", global_GL_vertex);
    v8::Handle<v8::Function> global_GL_normal = V8Func(global_GL_normal)->GetFunction();
    global_GL_normal->SetName(v8::String::New("normal"));
    global_GL->V8Set("normal", global_GL_normal);
    v8::Handle<v8::Function> global_GL_rasterPos = V8Func(global_GL_rasterPos)->GetFunction();
    global_GL_rasterPos->SetName(v8::String::New("rasterPos"));
    global_GL->V8Set("rasterPos", global_GL_rasterPos);
}