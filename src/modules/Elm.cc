/*
 * Copyright (c) 2011 Sanjeev B.A.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITRTLSS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, RTLGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONRTLCTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <v8-gearbox.h>
#include "Elm.h"

using namespace Gearbox;

/** \file Elm.cc converted from Elm.gear */

#line 1 "src/modules/Elm.gear"
#include <Elementary.h>

void close(void *data, Evas_Object *obj, void *event) {
    elm_exit();
}

void elmOnClick(void *_this, Evas_Object *eo, void *event_info) {
    (*reinterpret_cast<Value*>(_this))["_onClick"]();
}

void elmOnChanged(void *_this, Evas_Object *eo, void *event_info) {
    (*reinterpret_cast<Value*>(_this))["_onChanged"]();
}

static v8::Handle<v8::Value> _Elm_EvasObject_EvasObject(const v8::Arguments &args) {
    Value This(args.This());
    #line 49 "src/modules/Elm.gear"
    
    return undefined;
}

static v8::Handle<v8::Value> _Elm_EvasObject_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_EvasObject_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_EvasObject_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_EvasObject_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_EvasObject_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_EvasObject_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_EvasObject_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_EvasObject_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_EvasObject_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_EvasObject_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_EvasObject_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_EvasObject_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_EvasObject_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_EvasObject_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_EvasObject_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_EvasObject_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_EvasObject_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_EvasObject_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_EvasObject_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_EvasObject_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_EvasObject_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_EvasObject_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Win_Win(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 2) {
        #line 169 "src/modules/Elm.gear"
        Value parent(args[0]), title(args[1]);
        This["eo"] = elm_win_add(NULL, title.to<String>(), ELM_WIN_BASIC);
        evas_object_smart_callback_add(This["eo"], "delete,request", close, NULL);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Win");
}

static v8::Handle<v8::Value> _Elm_Win_resize(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 2) {
        #line 175 "src/modules/Elm.gear"
        Value width(args[0]), height(args[1]);
        evas_object_resize(This["eo"], width, height);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Win.prototype.resize");
}

static v8::Handle<v8::Value> _Elm_Win_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Win_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Win_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Win_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Win_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Win_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Win_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Win_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Win_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Win_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Win_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Win_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Win_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Win_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Win_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Win_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Win_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Win_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Win_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Win_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Win_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Win_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Win_title(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 180 "src/modules/Elm.gear"
    return String(elm_win_title_get(This["eo"]));
}

static void _Elm_Win_title(v8::Local<v8::String>, v8::Local<v8::Value> _title, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 183 "src/modules/Elm.gear"
    Value title(_title);
    elm_win_title_set(This["eo"], title.to<String>());
}

static v8::Handle<v8::Value> _Elm_Win_autodel(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 188 "src/modules/Elm.gear"
    bool _autodel = elm_win_autodel_get(This["eo"]);
    return Value(_autodel);
}

static void _Elm_Win_autodel(v8::Local<v8::String>, v8::Local<v8::Value> __autodel, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 192 "src/modules/Elm.gear"
    Value _autodel(__autodel);
    elm_win_autodel_set(This["eo"], _autodel);
}

static v8::Handle<v8::Value> _Elm_Background_Background(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 3) {
        #line 200 "src/modules/Elm.gear"
        Value parent(args[0]), file(args[1]), group(args[2]);
        This["eo"] = elm_bg_add(parent["eo"]);
        elm_bg_file_set(This["eo"], file.to<String>(), group.to<String>());
        evas_object_size_hint_weight_set(This["eo"], EVAS_HINT_EXPAND, EVAS_HINT_EXPAND);
        elm_win_resize_object_add(parent["eo"], This["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Background");
}

static v8::Handle<v8::Value> _Elm_Background_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Background_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Background_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Background_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Background_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Background_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Background_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Background_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Background_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Background_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Background_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Background_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Background_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Background_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Background_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Background_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Background_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Background_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Background_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Background_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Background_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Background_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Background_red(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 209 "src/modules/Elm.gear"
    int r;
    elm_bg_color_get(This["eo"], &r, NULL, NULL);
    return Integer(r);
}

static void _Elm_Background_red(v8::Local<v8::String>, v8::Local<v8::Value> __r, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 214 "src/modules/Elm.gear"
    Value _r(__r);
    int r, g, b;
    elm_bg_color_get(This["eo"], &r, &g, &b);
    elm_bg_color_set(This["eo"], _r, g, b);
}

static v8::Handle<v8::Value> _Elm_Background_green(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 221 "src/modules/Elm.gear"
    int g;
    elm_bg_color_get(This["eo"], NULL, &g, NULL);
    return Integer(g);
}

static void _Elm_Background_green(v8::Local<v8::String>, v8::Local<v8::Value> __g, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 226 "src/modules/Elm.gear"
    Value _g(__g);
    int r, g, b;
    elm_bg_color_get(This["eo"], &r, &g, &b);
    elm_bg_color_set(This["eo"], r, _g, b);
}

static v8::Handle<v8::Value> _Elm_Background_blue(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 233 "src/modules/Elm.gear"
    int b;
    elm_bg_color_get(This["eo"], NULL, NULL, &b);
    return Integer(b);
}

static void _Elm_Background_blue(v8::Local<v8::String>, v8::Local<v8::Value> __b, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 238 "src/modules/Elm.gear"
    Value _b(__b);
    int r, g, b;
    elm_bg_color_get(This["eo"], &r, &g, &b);
    elm_bg_color_set(This["eo"], r, g, _b);
}

static v8::Handle<v8::Value> _Elm_Background_file(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 245 "src/modules/Elm.gear"
    const char *file, *group;
    elm_bg_file_get(This["eo"], &file, &group);
    return String(file);
}

static void _Elm_Background_file(v8::Local<v8::String>, v8::Local<v8::Value> _file, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 250 "src/modules/Elm.gear"
    Value file(_file);
    elm_bg_file_set(This["eo"], file.to<String>(), NULL);
}

static v8::Handle<v8::Value> _Elm_Background_group(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 255 "src/modules/Elm.gear"
    const char *file, *group;
    elm_bg_file_get(This["eo"], &file, &group);
    return String(group);
}

static void _Elm_Background_group(v8::Local<v8::String>, v8::Local<v8::Value> _group, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 260 "src/modules/Elm.gear"
    Value group(_group);
    elm_bg_file_set(This["eo"], NULL, group.to<String>());
}

static v8::Handle<v8::Value> _Elm_Background_bgOption(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 265 "src/modules/Elm.gear"
    int option;
    option = elm_bg_option_get(This["eo"]);
    return Integer(option);
}

static void _Elm_Background_bgOption(v8::Local<v8::String>, v8::Local<v8::Value> __option, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 270 "src/modules/Elm.gear"
    Value _option(__option);
    Elm_Bg_Option _opt = (Elm_Bg_Option)(_option.to<int>());
    elm_bg_option_set(This["eo"], _opt);
}

static v8::Handle<v8::Value> _Elm_Box_Box(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 277 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_box_add(parent["eo"]);
        evas_object_size_hint_weight_set(This["eo"], EVAS_HINT_EXPAND, EVAS_HINT_EXPAND);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Box");
}

static v8::Handle<v8::Value> _Elm_Box_add(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 283 "src/modules/Elm.gear"
        Value child(args[0]);
        elm_box_pack_end(This["eo"], child["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Box.prototype.add");
}

static v8::Handle<v8::Value> _Elm_Box_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Box_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Box_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Box_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Box_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Box_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Box_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Box_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Box_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Box_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Box_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Box_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Box_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Box_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Box_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Box_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Box_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Box_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Box_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Box_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Box_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Box_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Box_homogenous(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 288 "src/modules/Elm.gear"
    return Value(elm_box_homogeneous_get(This["eo"]));
}

static void _Elm_Box_homogenous(v8::Local<v8::String>, v8::Local<v8::Value> _homogenous, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 291 "src/modules/Elm.gear"
    Value homogenous(_homogenous);
    elm_box_homogeneous_set(This["eo"], homogenous);
}

static v8::Handle<v8::Value> _Elm_Box_horizontal(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 296 "src/modules/Elm.gear"
    return Value(elm_box_horizontal_get(This["eo"]));
}

static void _Elm_Box_horizontal(v8::Local<v8::String>, v8::Local<v8::Value> _horizontal, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 299 "src/modules/Elm.gear"
    Value horizontal(_horizontal);
    elm_box_horizontal_set(This["eo"], horizontal);
}

static v8::Handle<v8::Value> _Elm_Icon_Icon(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 2) {
        #line 306 "src/modules/Elm.gear"
        Value parent(args[0]), file(args[1]);
        This["eo"] = elm_icon_add(parent["eo"]);
        elm_icon_file_set(This["eo"], file.to<String>(), NULL);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Icon");
}

static v8::Handle<v8::Value> _Elm_Icon_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Icon_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Icon_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Icon_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Icon_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Icon_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Icon_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Icon_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Icon_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Icon_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Icon_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Icon_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Icon_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Icon_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Icon_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Icon_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Icon_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Icon_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Icon_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Icon_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Icon_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Icon_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Icon_file(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 313 "src/modules/Elm.gear"
    const char *file, *group;
    elm_icon_file_get(This["eo"], &file, &group);
    return String(file);
}

static void _Elm_Icon_file(v8::Local<v8::String>, v8::Local<v8::Value> _file, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 318 "src/modules/Elm.gear"
    Value file(_file);
    elm_icon_file_set(This["eo"], file.to<String>(), NULL);
}

static v8::Handle<v8::Value> _Elm_Icon_scaleDown(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 323 "src/modules/Elm.gear"
    Eina_Bool sd, su;
    elm_icon_scale_get(This["eo"], &su, &sd);
    return Integer(sd);
}

static void _Elm_Icon_scaleDown(v8::Local<v8::String>, v8::Local<v8::Value> __sd, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 328 "src/modules/Elm.gear"
    Value _sd(__sd);
    Eina_Bool sd, su;
    elm_icon_scale_get(This["eo"], &su, &sd);
    elm_icon_scale_set(This["eo"], su, _sd);
}

static v8::Handle<v8::Value> _Elm_Icon_scaleUp(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 335 "src/modules/Elm.gear"
    Eina_Bool sd, su;
    elm_icon_scale_get(This["eo"], &su, &sd);
    return Integer(su);
}

static void _Elm_Icon_scaleUp(v8::Local<v8::String>, v8::Local<v8::Value> __su, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 340 "src/modules/Elm.gear"
    Value _su(__su);
    Eina_Bool sd, su;
    elm_icon_scale_get(This["eo"], &su, &sd);
    elm_icon_scale_set(This["eo"], _su, sd);
}

static v8::Handle<v8::Value> _Elm_Icon_prescale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 347 "src/modules/Elm.gear"
    return Integer(elm_icon_prescale_get(This["eo"]));
}

static void _Elm_Icon_prescale(v8::Local<v8::String>, v8::Local<v8::Value> __arit, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 350 "src/modules/Elm.gear"
    Value _arit(__arit);
    elm_icon_prescale_set(This["eo"], _arit);
}

static v8::Handle<v8::Value> _Elm_Icon_animated(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 355 "src/modules/Elm.gear"
    return Integer(elm_icon_animated_get(This["eo"]));
}

static void _Elm_Icon_animated(v8::Local<v8::String>, v8::Local<v8::Value> __anim, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 358 "src/modules/Elm.gear"
    Value _anim(__anim);
    elm_icon_animated_set(This["eo"], _anim);
}

static v8::Handle<v8::Value> _Elm_Icon_animPlay(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 363 "src/modules/Elm.gear"
    return Integer(elm_icon_animated_play_get(This["eo"]));
}

static void _Elm_Icon_animPlay(v8::Local<v8::String>, v8::Local<v8::Value> __ap, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 366 "src/modules/Elm.gear"
    Value _ap(__ap);
    elm_icon_animated_play_set(This["eo"], _ap);
}

static v8::Handle<v8::Value> _Elm_Icon_smooth(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 371 "src/modules/Elm.gear"
    return Integer(elm_icon_smooth_get(This["eo"]));
}

static void _Elm_Icon_smooth(v8::Local<v8::String>, v8::Local<v8::Value> __smooth, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 374 "src/modules/Elm.gear"
    Value _smooth(__smooth);
    elm_icon_smooth_set(This["eo"], _smooth);
}

static v8::Handle<v8::Value> _Elm_Icon_standard(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 379 "src/modules/Elm.gear"
    return String(elm_icon_standard_get(This["eo"]));
}

static void _Elm_Icon_standard(v8::Local<v8::String>, v8::Local<v8::Value> __std, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 382 "src/modules/Elm.gear"
    Value _std(__std);
    elm_icon_standard_set(This["eo"],_std);
}

static v8::Handle<v8::Value> _Elm_Icon_fillOutside(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 387 "src/modules/Elm.gear"
    return Integer(elm_icon_fill_outside_get(This["eo"]));
}

static void _Elm_Icon_fillOutside(v8::Local<v8::String>, v8::Local<v8::Value> __fo, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 390 "src/modules/Elm.gear"
    Value _fo(__fo);
    elm_icon_fill_outside_set(This["eo"], _fo);
}

static v8::Handle<v8::Value> _Elm_Button_Button(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 398 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_button_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Button");
}

static v8::Handle<v8::Value> _Elm_Button_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Button_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Button_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Button_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Button_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Button_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Button_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Button_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Button_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Button_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Button_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Button_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Button_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Button_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Button_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Button_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Button_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Button_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Button_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Button_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Button_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Button_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Button_autorepeat(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 404 "src/modules/Elm.gear"
    bool autorepeat = elm_button_autorepeat_get(This["eo"]);
    return Integer(autorepeat);
}

static void _Elm_Button_autorepeat(v8::Local<v8::String>, v8::Local<v8::Value> _autorepeat, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 408 "src/modules/Elm.gear"
    Value autorepeat(_autorepeat);
    elm_button_autorepeat_set(This["eo"], autorepeat);
}

static v8::Handle<v8::Value> _Elm_Button_autorepeatInitTimeout(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 413 "src/modules/Elm.gear"
    double arit = elm_button_autorepeat_initial_timeout_get(This["eo"]);
    return Number(arit);
}

static void _Elm_Button_autorepeatInitTimeout(v8::Local<v8::String>, v8::Local<v8::Value> __arit, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 417 "src/modules/Elm.gear"
    Value _arit(__arit);
    elm_button_autorepeat_initial_timeout_set(This["eo"], _arit);
}

static v8::Handle<v8::Value> _Elm_Button_autorepeatGapTimeout(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 422 "src/modules/Elm.gear"
    double argt = elm_button_autorepeat_gap_timeout_get(This["eo"]);
    return Number(argt);
}

static void _Elm_Button_autorepeatGapTimeout(v8::Local<v8::String>, v8::Local<v8::Value> __argt, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 426 "src/modules/Elm.gear"
    Value _argt(__argt);
    elm_button_autorepeat_gap_timeout_set(This["eo"], _argt);
}

static v8::Handle<v8::Value> _Elm_Button_onClick(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 436 "src/modules/Elm.gear"
    return This["_onClick"];
}

static void _Elm_Button_onClick(v8::Local<v8::String>, v8::Local<v8::Value> _arg, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 430 "src/modules/Elm.gear"
    Value arg(_arg);
    This["_onClick"] = arg;
    evas_object_smart_callback_add(This["eo"], "clicked", elmOnClick, new Value(This));
}

static v8::Handle<v8::Value> _Elm_Radio_Radio(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 442 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_radio_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Radio");
}

static v8::Handle<v8::Value> _Elm_Radio_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Radio_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Radio_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Radio_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Radio_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Radio_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Radio_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Radio_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Radio_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Radio_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Radio_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Radio_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Radio_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Radio_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Radio_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Radio_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Radio_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Radio_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Radio_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Radio_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Radio_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Radio_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Radio_group(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 448 "src/modules/Elm.gear"
    // TODO : Not implemented in EFL
    //elm_radio_group_get(This["eo"]);
    return This["eo"];
}

static void _Elm_Radio_group(v8::Local<v8::String>, v8::Local<v8::Value> _group, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 453 "src/modules/Elm.gear"
    Value group(_group);
    elm_radio_group_add(This["eo"], group["eo"]);
}

static v8::Handle<v8::Value> _Elm_Radio_state(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 458 "src/modules/Elm.gear"
    int state = elm_radio_state_value_get(This["eo"]);
    return Integer(state);
}

static void _Elm_Radio_state(v8::Local<v8::String>, v8::Local<v8::Value> __state, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 462 "src/modules/Elm.gear"
    Value _state(__state);
    elm_radio_state_value_set(This["eo"], _state);
}

static v8::Handle<v8::Value> _Elm_Radio_value(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 467 "src/modules/Elm.gear"
    int value = elm_radio_value_get(This["eo"]);
    return Integer(value);
}

static void _Elm_Radio_value(v8::Local<v8::String>, v8::Local<v8::Value> __value, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 471 "src/modules/Elm.gear"
    Value _value(__value);
    elm_radio_value_set(This["eo"], _value);
}

static v8::Handle<v8::Value> _Elm_Label_Label(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 479 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_label_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Label");
}

static v8::Handle<v8::Value> _Elm_Label_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Label_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Label_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Label_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Label_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Label_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Label_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Label_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Label_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Label_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Label_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Label_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Label_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Label_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Label_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Label_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Label_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Label_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Label_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Label_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Label_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Label_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Label_wrap(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 485 "src/modules/Elm.gear"
    int wrap = elm_label_line_wrap_get (This["eo"]);
    return Integer(wrap);
}

static void _Elm_Label_wrap(v8::Local<v8::String>, v8::Local<v8::Value> __wrap, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 489 "src/modules/Elm.gear"
    Value _wrap(__wrap);
    Elm_Wrap_Type _wt = (Elm_Wrap_Type)(_wrap.to<int>());
    elm_label_line_wrap_set(This["eo"], _wt);
}

static v8::Handle<v8::Value> _Elm_Label_wrapWidth(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 495 "src/modules/Elm.gear"
    Evas_Coord w = elm_label_wrap_width_get (This["eo"]);
    return Integer(w);
}

static void _Elm_Label_wrapWidth(v8::Local<v8::String>, v8::Local<v8::Value> __wrap, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 499 "src/modules/Elm.gear"
    Value _wrap(__wrap);
    elm_label_wrap_width_set(This["eo"], (Evas_Coord)(_wrap));
}

static v8::Handle<v8::Value> _Elm_Label_wrapHeight(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 504 "src/modules/Elm.gear"
    Evas_Coord h = elm_label_wrap_height_get (This["eo"]);
    return Integer(h);
}

static void _Elm_Label_wrapHeight(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 508 "src/modules/Elm.gear"
    Value _height(__height);
    elm_label_wrap_height_set(This["eo"], (Evas_Coord)(_height));
}

static v8::Handle<v8::Value> _Elm_Label_fontSize(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 513 "src/modules/Elm.gear"
    int fs = 0;
    // TODO : Not implemented in EFL
    //elm_label_fontsize_get(This["eo"], &fs);
    return Integer(fs);
}

static void _Elm_Label_fontSize(v8::Local<v8::String>, v8::Local<v8::Value> __fs, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 519 "src/modules/Elm.gear"
    Value _fs(__fs);
    elm_label_fontsize_set(This["eo"], _fs);
}

static v8::Handle<v8::Value> _Elm_Label_textAlign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 524 "src/modules/Elm.gear"
    // TODO : Not implemented in EFL
    return String("center");
}

static void _Elm_Label_textAlign(v8::Local<v8::String>, v8::Local<v8::Value> __align, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 528 "src/modules/Elm.gear"
    Value _align(__align);
    elm_label_text_align_set(This["eo"],_align);
}

static v8::Handle<v8::Value> _Elm_Label_ellipsis(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 533 "src/modules/Elm.gear"
    // TODO : Not implemented in EFL
    //bool ellipsis = elm_label_ellipsis_get(This["eo"]);
    return Value(false);
}

static void _Elm_Label_ellipsis(v8::Local<v8::String>, v8::Local<v8::Value> __ellipsis, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 538 "src/modules/Elm.gear"
    Value _ellipsis(__ellipsis);
    elm_label_ellipsis_set(This["eo"], _ellipsis);
}

static v8::Handle<v8::Value> _Elm_Flip_Flip(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 546 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_flip_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Flip");
}

static v8::Handle<v8::Value> _Elm_Flip_go(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 567 "src/modules/Elm.gear"
        Value mode(args[0]);
        elm_flip_go(This["eo"], (Elm_Flip_Mode)(mode.to<int>()));
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Flip.prototype.go");
}

static v8::Handle<v8::Value> _Elm_Flip_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Flip_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Flip_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Flip_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Flip_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Flip_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Flip_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Flip_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Flip_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Flip_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Flip_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Flip_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Flip_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Flip_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Flip_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Flip_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Flip_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Flip_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Flip_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Flip_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Flip_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Flip_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Flip_front(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 552 "src/modules/Elm.gear"
    return Value(elm_flip_content_front_get(This["eo"]));
}

static void _Elm_Flip_front(v8::Local<v8::String>, v8::Local<v8::Value> __front, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 555 "src/modules/Elm.gear"
    Value _front(__front);
    elm_flip_content_front_set(This["eo"], _front);
}

static v8::Handle<v8::Value> _Elm_Flip_back(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 560 "src/modules/Elm.gear"
    return Value(elm_flip_content_back_get(This["eo"]));
}

static void _Elm_Flip_back(v8::Local<v8::String>, v8::Local<v8::Value> __back, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 563 "src/modules/Elm.gear"
    Value _back(__back);
    elm_flip_content_back_set(This["eo"], _back);
}

static v8::Handle<v8::Value> _Elm_Flip_interaction(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 572 "src/modules/Elm.gear"
    return Integer(elm_flip_interaction_get(This["eo"]));
}

static void _Elm_Flip_interaction(v8::Local<v8::String>, v8::Local<v8::Value> __interact, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 575 "src/modules/Elm.gear"
    Value _interact(__interact);
    elm_flip_interaction_set (This["eo"], (Elm_Flip_Interaction)(_interact.to<int>()));
}

static v8::Handle<v8::Value> _Elm_ActionSlider_ActionSlider(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 583 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_actionslider_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.ActionSlider");
}

static v8::Handle<v8::Value> _Elm_ActionSlider_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_ActionSlider_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_ActionSlider_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_ActionSlider_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_ActionSlider_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_ActionSlider_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_ActionSlider_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_ActionSlider_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_ActionSlider_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_ActionSlider_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_ActionSlider_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_ActionSlider_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_ActionSlider_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_ActionSlider_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_ActionSlider_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_ActionSlider_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_ActionSlider_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_ActionSlider_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_ActionSlider_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_ActionSlider_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_ActionSlider_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_ActionSlider_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_ActionSlider_selectedLabel(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 589 "src/modules/Elm.gear"
    return String(elm_actionslider_selected_label_get(This["eo"]));
}

static void _Elm_ActionSlider_selectedLabel(v8::Local<v8::String>, v8::Local<v8::Value> __sl, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 592 "src/modules/Elm.gear"
    Value _sl(__sl);
    // TODO : Not implemented in EFL
}

static v8::Handle<v8::Value> _Elm_ActionSlider_indicatorPos(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 597 "src/modules/Elm.gear"
    return Integer(elm_actionslider_indicator_pos_get(This["eo"]));
}

static void _Elm_ActionSlider_indicatorPos(v8::Local<v8::String>, v8::Local<v8::Value> __ip, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 600 "src/modules/Elm.gear"
    Value _ip(__ip);
    elm_actionslider_indicator_pos_set(This["eo"], (Elm_Actionslider_Pos)(_ip.to<int>()));
}

static v8::Handle<v8::Value> _Elm_ActionSlider_enabledPos(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 605 "src/modules/Elm.gear"
    return Integer(elm_actionslider_enabled_pos_get(This["eo"]));
}

static void _Elm_ActionSlider_enabledPos(v8::Local<v8::String>, v8::Local<v8::Value> __ip, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 608 "src/modules/Elm.gear"
    Value _ip(__ip);
    elm_actionslider_enabled_pos_set(This["eo"], (Elm_Actionslider_Pos)(_ip.to<int>()));
}

static v8::Handle<v8::Value> _Elm_ActionSlider_magnetPos(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 613 "src/modules/Elm.gear"
    return Integer(elm_actionslider_magnet_pos_get(This["eo"]));
}

static void _Elm_ActionSlider_magnetPos(v8::Local<v8::String>, v8::Local<v8::Value> __ip, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 616 "src/modules/Elm.gear"
    Value _ip(__ip);
    elm_actionslider_magnet_pos_set(This["eo"], (Elm_Actionslider_Pos)(_ip.to<int>()));
}

static v8::Handle<v8::Value> _Elm_Scroller_Scroller(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 624 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_scroller_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Scroller");
}

static v8::Handle<v8::Value> _Elm_Scroller_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Scroller_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Scroller_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Scroller_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Scroller_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Scroller_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Scroller_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Scroller_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Scroller_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Scroller_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Scroller_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Scroller_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Scroller_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Scroller_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Scroller_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Scroller_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Scroller_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Scroller_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Scroller_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Scroller_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Scroller_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Scroller_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Scroller_content(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 630 "src/modules/Elm.gear"
    return Value(elm_scroller_content_get(This["eo"]));
}

static void _Elm_Scroller_content(v8::Local<v8::String>, v8::Local<v8::Value> __content, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 633 "src/modules/Elm.gear"
    Value _content(__content);
    elm_scroller_content_set(This["eo"], _content["eo"]);
}

static v8::Handle<v8::Value> _Elm_Scroller_hBounce(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 638 "src/modules/Elm.gear"
    Eina_Bool hb, vb;
    elm_scroller_bounce_get(This["eo"], &hb, &vb);
    return Integer(hb);
}

static void _Elm_Scroller_hBounce(v8::Local<v8::String>, v8::Local<v8::Value> __hb, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 643 "src/modules/Elm.gear"
    Value _hb(__hb);
    Eina_Bool hb, vb;
    elm_scroller_bounce_get(This["eo"], &hb, &vb);
    elm_scroller_bounce_set(This["eo"], _hb.to<int>(), vb);
}

static v8::Handle<v8::Value> _Elm_Scroller_vBounce(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 650 "src/modules/Elm.gear"
    Eina_Bool hb, vb;
    elm_scroller_bounce_get(This["eo"], &hb, &vb);
    return Integer(vb);
}

static void _Elm_Scroller_vBounce(v8::Local<v8::String>, v8::Local<v8::Value> __vb, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 655 "src/modules/Elm.gear"
    Value _vb(__vb);
    Eina_Bool hb, vb;
    elm_scroller_bounce_get(This["eo"], &hb, &vb);
    elm_scroller_bounce_set(This["eo"], hb, _vb.to<int>());
}

static v8::Handle<v8::Value> _Elm_Scroller_xPolicy(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 662 "src/modules/Elm.gear"
    Elm_Scroller_Policy xp, yp;
    elm_scroller_policy_get(This["eo"], &xp, &yp);
    return Integer(xp);
}

static void _Elm_Scroller_xPolicy(v8::Local<v8::String>, v8::Local<v8::Value> __xp, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 667 "src/modules/Elm.gear"
    Value _xp(__xp);
    Elm_Scroller_Policy xp, yp;
    elm_scroller_policy_get(This["eo"], &xp, &yp);
    elm_scroller_policy_set(This["eo"], (Elm_Scroller_Policy)(_xp.to<int>()), yp);
}

static v8::Handle<v8::Value> _Elm_Scroller_yPolicy(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 674 "src/modules/Elm.gear"
    Elm_Scroller_Policy xp, yp;
    elm_scroller_policy_get(This["eo"], &xp, &yp);
    return Integer(yp);
}

static void _Elm_Scroller_yPolicy(v8::Local<v8::String>, v8::Local<v8::Value> __yp, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 679 "src/modules/Elm.gear"
    Value _yp(__yp);
    Elm_Scroller_Policy xp, yp;
    elm_scroller_policy_get(This["eo"], &xp, &yp);
    elm_scroller_policy_set(This["eo"], xp, (Elm_Scroller_Policy)(_yp.to<int>()));
}

static v8::Handle<v8::Value> _Elm_Slider_Slider(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 689 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_slider_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Slider");
}

static v8::Handle<v8::Value> _Elm_Slider_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Slider_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Slider_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Slider_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Slider_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Slider_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Slider_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Slider_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Slider_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Slider_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Slider_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Slider_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Slider_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Slider_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Slider_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Slider_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Slider_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Slider_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Slider_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Slider_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Slider_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Slider_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_List_List(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 698 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_list_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.List");
}

static v8::Handle<v8::Value> _Elm_List_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_List_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_List_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_List_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_List_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_List_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_List_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_List_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_List_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_List_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_List_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_List_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_List_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_List_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_List_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_List_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_List_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_List_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_List_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_List_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_List_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_List_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Check_Check(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 707 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_check_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Check");
}

static v8::Handle<v8::Value> _Elm_Check_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Check_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Check_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Check_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Check_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Check_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Check_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Check_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Check_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Check_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Check_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Check_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Check_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Check_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Check_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Check_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Check_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Check_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Check_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Check_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Check_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Check_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Check_state(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 713 "src/modules/Elm.gear"
    return Integer(elm_check_state_get(This["eo"]));
}

static void _Elm_Check_state(v8::Local<v8::String>, v8::Local<v8::Value> __state, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 716 "src/modules/Elm.gear"
    Value _state(__state);
    elm_check_state_set(This["eo"], _state.to<Eina_Bool>());
}

static v8::Handle<v8::Value> _Elm_Clock_Clock(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 723 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_clock_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Clock");
}

static v8::Handle<v8::Value> _Elm_Clock_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Clock_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Clock_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Clock_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Clock_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Clock_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Clock_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Clock_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Clock_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Clock_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Clock_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Clock_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Clock_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Clock_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Clock_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Clock_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Clock_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Clock_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Clock_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Clock_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Clock_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Clock_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Clock_hour(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 729 "src/modules/Elm.gear"
    int h,m,s;
    elm_clock_time_get(This["eo"], &h, &m, &s);
    return Integer(h);
}

static void _Elm_Clock_hour(v8::Local<v8::String>, v8::Local<v8::Value> __h, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 734 "src/modules/Elm.gear"
    Value _h(__h);
    int h,m,s;
    elm_clock_time_get(This["eo"], &h, &m, &s);
    elm_clock_time_set(This["eo"], _h.to<int>(), m, s);
}

static v8::Handle<v8::Value> _Elm_Clock_minute(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 741 "src/modules/Elm.gear"
    int h,m,s;
    elm_clock_time_get(This["eo"], &h, &m, &s);
    return Integer(m);
}

static void _Elm_Clock_minute(v8::Local<v8::String>, v8::Local<v8::Value> __m, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 746 "src/modules/Elm.gear"
    Value _m(__m);
    int h,m,s;
    elm_clock_time_get(This["eo"], &h, &m, &s);
    elm_clock_time_set(This["eo"], h, _m.to<int>(), s);
}

static v8::Handle<v8::Value> _Elm_Clock_second(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 753 "src/modules/Elm.gear"
    int h,m,s;
    elm_clock_time_get(This["eo"], &h, &m, &s);
    return Integer(s);
}

static void _Elm_Clock_second(v8::Local<v8::String>, v8::Local<v8::Value> __s, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 758 "src/modules/Elm.gear"
    Value _s(__s);
    int h,m,s;
    elm_clock_time_get(This["eo"], &h, &m, &s);
    elm_clock_time_set(This["eo"], h, m, _s.to<int>());
}

static v8::Handle<v8::Value> _Elm_Clock_edit(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 765 "src/modules/Elm.gear"
    Eina_Bool ed;
    return Integer(elm_clock_edit_get(This["eo"]));
}

static void _Elm_Clock_edit(v8::Local<v8::String>, v8::Local<v8::Value> __ed, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 769 "src/modules/Elm.gear"
    Value _ed(__ed);
    elm_clock_edit_set(This["eo"], _ed.to<Eina_Bool>());
}

static v8::Handle<v8::Value> _Elm_Clock_digitEdit(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 774 "src/modules/Elm.gear"
    return Integer(elm_clock_digit_edit_get(This["eo"]));
}

static void _Elm_Clock_digitEdit(v8::Local<v8::String>, v8::Local<v8::Value> __de, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 777 "src/modules/Elm.gear"
    Value _de(__de);
    elm_clock_digit_edit_set(This["eo"], (Elm_Clock_Digedit)(_de.to<int>()));
}

static v8::Handle<v8::Value> _Elm_Clock_showAMPM(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 782 "src/modules/Elm.gear"
    return Integer(elm_clock_show_am_pm_get(This["eo"]));
}

static void _Elm_Clock_showAMPM(v8::Local<v8::String>, v8::Local<v8::Value> __ampm, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 785 "src/modules/Elm.gear"
    Value _ampm(__ampm);
    elm_clock_show_am_pm_set(This["eo"], (Elm_Clock_Digedit)(_ampm.to<int>()));
}

static v8::Handle<v8::Value> _Elm_Clock_showSeconds(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 790 "src/modules/Elm.gear"
    return Integer(elm_clock_show_seconds_get(This["eo"]));
}

static void _Elm_Clock_showSeconds(v8::Local<v8::String>, v8::Local<v8::Value> __secs, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 793 "src/modules/Elm.gear"
    Value _secs(__secs);
    elm_clock_show_seconds_set(This["eo"], _secs.to<Eina_Bool>());
}

static v8::Handle<v8::Value> _Elm_Clock_interval(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 798 "src/modules/Elm.gear"
    return Number(elm_clock_interval_get(This["eo"]));
}

static void _Elm_Clock_interval(v8::Local<v8::String>, v8::Local<v8::Value> __intvl, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 801 "src/modules/Elm.gear"
    Value _intvl(__intvl);
    elm_clock_interval_set(This["eo"], (double)(_intvl.to<int>()));
}

static v8::Handle<v8::Value> _Elm_ProgressBar_ProgressBar(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 809 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_progressbar_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.ProgressBar");
}

static v8::Handle<v8::Value> _Elm_ProgressBar_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_ProgressBar_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_ProgressBar_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_ProgressBar_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_ProgressBar_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_ProgressBar_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_ProgressBar_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_ProgressBar_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_ProgressBar_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_ProgressBar_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_ProgressBar_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_ProgressBar_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_ProgressBar_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_ProgressBar_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_ProgressBar_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_ProgressBar_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_ProgressBar_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_ProgressBar_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_ProgressBar_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_ProgressBar_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_ProgressBar_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_ProgressBar_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_ProgressBar_pulse(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 815 "src/modules/Elm.gear"
    return Integer(elm_progressbar_pulse_get(This["eo"]));
}

static void _Elm_ProgressBar_pulse(v8::Local<v8::String>, v8::Local<v8::Value> __pulse, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 818 "src/modules/Elm.gear"
    Value _pulse(__pulse);
    elm_progressbar_pulse_set(This["eo"], _pulse.to<Eina_Bool>());
}

static v8::Handle<v8::Value> _Elm_ProgressBar_value(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 823 "src/modules/Elm.gear"
    return Integer(elm_progressbar_value_get(This["eo"]));
}

static void _Elm_ProgressBar_value(v8::Local<v8::String>, v8::Local<v8::Value> __value, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 826 "src/modules/Elm.gear"
    Value _value(__value);
    elm_progressbar_value_set(This["eo"], (double)(_value.to<int>()));
}

static v8::Handle<v8::Value> _Elm_ProgressBar_spanSize(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 831 "src/modules/Elm.gear"
    return Integer(elm_progressbar_span_size_get(This["eo"]));
}

static void _Elm_ProgressBar_spanSize(v8::Local<v8::String>, v8::Local<v8::Value> __ss, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 834 "src/modules/Elm.gear"
    Value _ss(__ss);
    elm_progressbar_span_size_set(This["eo"], (Evas_Coord)(_ss.to<int>()));
}

static v8::Handle<v8::Value> _Elm_ProgressBar_unitFormat(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 839 "src/modules/Elm.gear"
    return String(elm_progressbar_unit_format_get(This["eo"]));
}

static void _Elm_ProgressBar_unitFormat(v8::Local<v8::String>, v8::Local<v8::Value> __value, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 842 "src/modules/Elm.gear"
    Value _value(__value);
    elm_progressbar_unit_format_set(This["eo"], _value);
}

static v8::Handle<v8::Value> _Elm_ProgressBar_horizontal(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 847 "src/modules/Elm.gear"
    return Integer(elm_progressbar_horizontal_get(This["eo"]));
}

static void _Elm_ProgressBar_horizontal(v8::Local<v8::String>, v8::Local<v8::Value> __value, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 850 "src/modules/Elm.gear"
    Value _value(__value);
    elm_progressbar_horizontal_set(This["eo"], _value.to<Eina_Bool>());
}

static v8::Handle<v8::Value> _Elm_ProgressBar_inverted(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 855 "src/modules/Elm.gear"
    return Integer(elm_progressbar_inverted_get(This["eo"]));
}

static void _Elm_ProgressBar_inverted(v8::Local<v8::String>, v8::Local<v8::Value> __value, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 858 "src/modules/Elm.gear"
    Value _value(__value);
    elm_progressbar_inverted_set(This["eo"], _value.to<Eina_Bool>());
}

static v8::Handle<v8::Value> _Elm_Photo_Photo(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 865 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_photo_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Photo");
}

static v8::Handle<v8::Value> _Elm_Photo_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Photo_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Photo_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Photo_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Photo_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Photo_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Photo_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Photo_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Photo_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Photo_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Photo_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Photo_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Photo_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Photo_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Photo_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Photo_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Photo_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Photo_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Photo_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Photo_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Photo_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Photo_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Photo_image(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 871 "src/modules/Elm.gear"
    // TODO : Not implemented in EFL
    return String("");
}

static void _Elm_Photo_image(v8::Local<v8::String>, v8::Local<v8::Value> __image, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 875 "src/modules/Elm.gear"
    Value _image(__image);
    elm_photo_file_set(This["eo"], _image);
}

static v8::Handle<v8::Value> _Elm_Photo_size(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 880 "src/modules/Elm.gear"
    // TODO : Not implemented in EFL
    return Integer(0);
}

static void _Elm_Photo_size(v8::Local<v8::String>, v8::Local<v8::Value> __value, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 884 "src/modules/Elm.gear"
    Value _value(__value);
    elm_photo_size_set(This["eo"], (_value.to<int>()));
}

static v8::Handle<v8::Value> _Elm_Photo_fill(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 889 "src/modules/Elm.gear"
    // TODO : Not implemented in EFL
    return Integer(0);
}

static void _Elm_Photo_fill(v8::Local<v8::String>, v8::Local<v8::Value> __value, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 893 "src/modules/Elm.gear"
    Value _value(__value);
    elm_photo_fill_inside_set(This["eo"], _value.to<Eina_Bool>());
}

static v8::Handle<v8::Value> _Elm_Photo_editable(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 898 "src/modules/Elm.gear"
    // TODO : Not implemented in EFL
    return Integer(0);
}

static void _Elm_Photo_editable(v8::Local<v8::String>, v8::Local<v8::Value> __value, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 902 "src/modules/Elm.gear"
    Value _value(__value);
    elm_photo_editable_set(This["eo"], _value.to<Eina_Bool>());
}

static v8::Handle<v8::Value> _Elm_Spinner_Spinner(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 910 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_spinner_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Spinner");
}

static v8::Handle<v8::Value> _Elm_Spinner_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Spinner_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Spinner_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Spinner_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Spinner_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Spinner_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Spinner_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Spinner_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Spinner_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Spinner_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Spinner_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Spinner_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Spinner_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Spinner_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Spinner_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Spinner_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Spinner_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Spinner_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Spinner_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Spinner_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Spinner_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Spinner_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Spinner_labelFormat(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 916 "src/modules/Elm.gear"
    return String(elm_spinner_label_format_get(This["eo"]));
}

static void _Elm_Spinner_labelFormat(v8::Local<v8::String>, v8::Local<v8::Value> __value, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 919 "src/modules/Elm.gear"
    Value _value(__value);
    elm_spinner_label_format_set(This["eo"], _value);
}

static v8::Handle<v8::Value> _Elm_Spinner_min(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 924 "src/modules/Elm.gear"
    double min, max;
    elm_spinner_min_max_get(This["eo"], &min, &max);
    return Number(min);
}

static void _Elm_Spinner_min(v8::Local<v8::String>, v8::Local<v8::Value> __min, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 929 "src/modules/Elm.gear"
    Value _min(__min);
    double min, max;
    elm_spinner_min_max_get(This["eo"], &min, &max);
    elm_spinner_min_max_set(This["eo"], _min, max);
}

static v8::Handle<v8::Value> _Elm_Spinner_max(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 936 "src/modules/Elm.gear"
    double min, max;
    elm_spinner_min_max_get(This["eo"], &min, &max);
    return Number(max);
}

static void _Elm_Spinner_max(v8::Local<v8::String>, v8::Local<v8::Value> __max, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 941 "src/modules/Elm.gear"
    Value _max(__max);
    double min, max;
    elm_spinner_min_max_get(This["eo"], &min, &max);
    elm_spinner_min_max_set(This["eo"], min, _max);
}

static v8::Handle<v8::Value> _Elm_Spinner_step(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 948 "src/modules/Elm.gear"
    return Number(elm_spinner_step_get(This["eo"]));
}

static void _Elm_Spinner_step(v8::Local<v8::String>, v8::Local<v8::Value> __step, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 951 "src/modules/Elm.gear"
    Value _step(__step);
    elm_spinner_step_set(This["eo"], (double)(_step.to<int>()));
}

static v8::Handle<v8::Value> _Elm_Spinner_value(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 956 "src/modules/Elm.gear"
    return Number(elm_spinner_value_get(This["eo"]));
}

static void _Elm_Spinner_value(v8::Local<v8::String>, v8::Local<v8::Value> __value, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 959 "src/modules/Elm.gear"
    Value _value(__value);
    elm_spinner_value_set(This["eo"], (double)(_value.to<int>()));
}

static v8::Handle<v8::Value> _Elm_Spinner_wrap(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 964 "src/modules/Elm.gear"
    return Integer(elm_spinner_wrap_get(This["eo"]));
}

static void _Elm_Spinner_wrap(v8::Local<v8::String>, v8::Local<v8::Value> __wrap, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 967 "src/modules/Elm.gear"
    Value _wrap(__wrap);
    elm_spinner_wrap_set(This["eo"], _wrap.to<Eina_Bool>());
}

static v8::Handle<v8::Value> _Elm_Spinner_editable(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 972 "src/modules/Elm.gear"
    return Integer(elm_spinner_editable_get(This["eo"]));
}

static void _Elm_Spinner_editable(v8::Local<v8::String>, v8::Local<v8::Value> __editable, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 975 "src/modules/Elm.gear"
    Value _editable(__editable);
    elm_spinner_editable_set(This["eo"], _editable.to<Eina_Bool>());
}

static v8::Handle<v8::Value> _Elm_Spinner_interval(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 980 "src/modules/Elm.gear"
    return Number(elm_spinner_interval_get(This["eo"]));
}

static void _Elm_Spinner_interval(v8::Local<v8::String>, v8::Local<v8::Value> __interval, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 983 "src/modules/Elm.gear"
    Value _interval(__interval);
    elm_spinner_interval_set(This["eo"], _interval.to<double>());
}

static v8::Handle<v8::Value> _Elm_Pane_Pane(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 991 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_panes_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Pane");
}

static v8::Handle<v8::Value> _Elm_Pane_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Pane_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Pane_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Pane_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Pane_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Pane_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Pane_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Pane_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Pane_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Pane_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Pane_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Pane_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Pane_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Pane_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Pane_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Pane_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Pane_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Pane_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Pane_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Pane_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Pane_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Pane_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Pane_contentLeft(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 997 "src/modules/Elm.gear"
    return Value(elm_panes_content_left_get(This["eo"]));
}

static void _Elm_Pane_contentLeft(v8::Local<v8::String>, v8::Local<v8::Value> __left, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1000 "src/modules/Elm.gear"
    Value _left(__left);
    elm_panes_content_left_set(This["eo"], _left["eo"]);
}

static v8::Handle<v8::Value> _Elm_Pane_contentRight(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1005 "src/modules/Elm.gear"
    return Value(elm_panes_content_right_get(This["eo"]));
}

static void _Elm_Pane_contentRight(v8::Local<v8::String>, v8::Local<v8::Value> __right, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1008 "src/modules/Elm.gear"
    Value _right(__right);
    elm_panes_content_right_set(This["eo"], _right["eo"]);
}

static v8::Handle<v8::Value> _Elm_Pane_leftSize(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1013 "src/modules/Elm.gear"
    return Number(elm_panes_content_left_size_get(This["eo"]));
}

static void _Elm_Pane_leftSize(v8::Local<v8::String>, v8::Local<v8::Value> __h, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1024 "src/modules/Elm.gear"
    Value _h(__h);
    elm_panes_horizontal_set(This["eo"], (double)(_h.to<int>()));
}

static v8::Handle<v8::Value> _Elm_Pane_horizontal(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1021 "src/modules/Elm.gear"
    return Number(elm_panes_horizontal_get(This["eo"]));
}

static v8::Handle<v8::Value> _Elm_Bubble_Bubble(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 1032 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_bubble_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Bubble");
}

static v8::Handle<v8::Value> _Elm_Bubble_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Bubble_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Bubble_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Bubble_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Bubble_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Bubble_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Bubble_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Bubble_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Bubble_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Bubble_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Bubble_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Bubble_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Bubble_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Bubble_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Bubble_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Bubble_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Bubble_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Bubble_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Bubble_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Bubble_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Bubble_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Bubble_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Bubble_content(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1038 "src/modules/Elm.gear"
    return Value(elm_bubble_content_get(This["eo"]));
}

static void _Elm_Bubble_content(v8::Local<v8::String>, v8::Local<v8::Value> __c, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1041 "src/modules/Elm.gear"
    Value _c(__c);
    elm_bubble_content_set(This["eo"], _c["eo"]);
}

static v8::Handle<v8::Value> _Elm_Bubble_corner(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1046 "src/modules/Elm.gear"
    return String(elm_bubble_corner_get(This["eo"]));
}

static void _Elm_Bubble_corner(v8::Local<v8::String>, v8::Local<v8::Value> __c, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1049 "src/modules/Elm.gear"
    Value _c(__c);
    elm_bubble_corner_set(This["eo"], _c.to<String>());
}

static v8::Handle<v8::Value> _Elm_ColorSelector_ColorSelector(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 1057 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_colorselector_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.ColorSelector");
}

static v8::Handle<v8::Value> _Elm_ColorSelector_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_ColorSelector_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_ColorSelector_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_ColorSelector_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_ColorSelector_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_ColorSelector_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_ColorSelector_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_ColorSelector_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_ColorSelector_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_ColorSelector_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_ColorSelector_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_ColorSelector_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_ColorSelector_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_ColorSelector_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_ColorSelector_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_ColorSelector_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_ColorSelector_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_ColorSelector_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_ColorSelector_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_ColorSelector_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_ColorSelector_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_ColorSelector_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_ColorSelector_red(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1063 "src/modules/Elm.gear"
    int r;
    elm_colorselector_color_get(This["eo"], &r, NULL, NULL, NULL);
    return Integer(r);
}

static void _Elm_ColorSelector_red(v8::Local<v8::String>, v8::Local<v8::Value> __r, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1068 "src/modules/Elm.gear"
    Value _r(__r);
    int r, g, b, a;
    elm_colorselector_color_get(This["eo"], &r, &g, &b, &a);
    elm_colorselector_color_set(This["eo"], _r, g, b, a);
}

static v8::Handle<v8::Value> _Elm_ColorSelector_green(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1075 "src/modules/Elm.gear"
    int g;
    elm_colorselector_color_get(This["eo"], NULL, &g, NULL, NULL);
    return Integer(g);
}

static void _Elm_ColorSelector_green(v8::Local<v8::String>, v8::Local<v8::Value> __g, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1080 "src/modules/Elm.gear"
    Value _g(__g);
    int r, g, b, a;
    elm_colorselector_color_get(This["eo"], &r, &g, &b, &a);
    elm_colorselector_color_set(This["eo"], r, _g, b, a);
}

static v8::Handle<v8::Value> _Elm_ColorSelector_blue(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1087 "src/modules/Elm.gear"
    int b;
    elm_colorselector_color_get(This["eo"], NULL, NULL, &b, NULL);
    return Integer(b);
}

static void _Elm_ColorSelector_blue(v8::Local<v8::String>, v8::Local<v8::Value> __b, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1092 "src/modules/Elm.gear"
    Value _b(__b);
    int r, g, b, a;
    elm_colorselector_color_get(This["eo"], &r, &g, &b, &a);
    elm_colorselector_color_set(This["eo"], r, g, _b, a);
}

static v8::Handle<v8::Value> _Elm_ColorSelector_alpha(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1099 "src/modules/Elm.gear"
    int a;
    elm_colorselector_color_get(This["eo"], NULL, NULL, NULL, &a);
    return Integer(a);
}

static void _Elm_ColorSelector_alpha(v8::Local<v8::String>, v8::Local<v8::Value> __a, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1104 "src/modules/Elm.gear"
    Value _a(__a);
    int r, g, b, a;
    elm_colorselector_color_get(This["eo"], &r, &g, &b, &a);
    elm_colorselector_color_set(This["eo"], r, g, b, _a);
}

static v8::Handle<v8::Value> _Elm_ColorSelector_onChanged(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1116 "src/modules/Elm.gear"
    return This["_onChanged"];
}

static void _Elm_ColorSelector_onChanged(v8::Local<v8::String>, v8::Local<v8::Value> _arg, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1110 "src/modules/Elm.gear"
    Value arg(_arg);
    This["_onChanged"] = arg;
    evas_object_smart_callback_add(This["eo"], "changed", elmOnChanged, new Value(This));
}

static v8::Handle<v8::Value> _Elm_Calendar_Calendar(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 1123 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_calendar_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Calendar");
}

static v8::Handle<v8::Value> _Elm_Calendar_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Calendar_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Calendar_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Calendar_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Calendar_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Calendar_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Calendar_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Calendar_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Calendar_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Calendar_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Calendar_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Calendar_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Calendar_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Calendar_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Calendar_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Calendar_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Calendar_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Calendar_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Calendar_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Calendar_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Calendar_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Calendar_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Entry_Entry(const v8::Arguments &args) {
    Value This(args.This());
    if(args.Length() >= 1) {
        #line 1131 "src/modules/Elm.gear"
        Value parent(args[0]);
        This["eo"] = elm_entry_add(parent["eo"]);
        evas_object_show(This["eo"]);
        return undefined;
    }
    THROW_ERROR("Invalid call to Elm.Entry");
}

static v8::Handle<v8::Value> _Elm_Entry_x(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 51 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(x);
}

static void _Elm_Entry_x(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 56 "src/modules/Elm.gear"
    Value _x(__x);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Entry_y(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 63 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(y);
}

static void _Elm_Entry_y(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 68 "src/modules/Elm.gear"
    Value _y(__y);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_move(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Entry_height(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 75 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(height);
}

static void _Elm_Entry_height(v8::Local<v8::String>, v8::Local<v8::Value> __height, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 80 "src/modules/Elm.gear"
    Value _height(__height);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], width, _height);
}

static v8::Handle<v8::Value> _Elm_Entry_width(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 87 "src/modules/Elm.gear"
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    return Number(width);
}

static void _Elm_Entry_width(v8::Local<v8::String>, v8::Local<v8::Value> __width, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 92 "src/modules/Elm.gear"
    Value _width(__width);
    Evas_Coord x, y, width, height;
    evas_object_geometry_get(This["eo"], &x, &y, &width, &height);
    evas_object_resize(This["eo"], _width, height);
}

static v8::Handle<v8::Value> _Elm_Entry_label(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 99 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Entry_label(v8::Local<v8::String>, v8::Local<v8::Value> _label, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 102 "src/modules/Elm.gear"
    Value label(_label);
    elm_object_text_set(This["eo"], label.to<String>());
}

static v8::Handle<v8::Value> _Elm_Entry_text(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 107 "src/modules/Elm.gear"
    return String(elm_object_text_get(This["eo"]));
}

static void _Elm_Entry_text(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 110 "src/modules/Elm.gear"
    Value text(_text);
    elm_object_text_set(This["eo"], text.to<String>());
}

static v8::Handle<v8::Value> _Elm_Entry_scale(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 115 "src/modules/Elm.gear"
    return Number(elm_object_scale_get(This["eo"]));
}

static void _Elm_Entry_scale(v8::Local<v8::String>, v8::Local<v8::Value> _scale, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 118 "src/modules/Elm.gear"
    Value scale(_scale);
    elm_object_scale_set(This["eo"], scale);
}

static v8::Handle<v8::Value> _Elm_Entry_xalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 123 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(x);
}

static void _Elm_Entry_xalign(v8::Local<v8::String>, v8::Local<v8::Value> __x, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 128 "src/modules/Elm.gear"
    Value _x(__x);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], _x, y);
}

static v8::Handle<v8::Value> _Elm_Entry_yalign(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 135 "src/modules/Elm.gear"
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    return Number(y);
}

static void _Elm_Entry_yalign(v8::Local<v8::String>, v8::Local<v8::Value> __y, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 140 "src/modules/Elm.gear"
    Value _y(__y);
    double x, y;
    evas_object_size_hint_align_get(This["eo"], &x, &y);
    evas_object_size_hint_align_set(This["eo"], x, _y);
}

static v8::Handle<v8::Value> _Elm_Entry_style(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 147 "src/modules/Elm.gear"
    return String(elm_object_style_get(This["eo"]));
}

static void _Elm_Entry_style(v8::Local<v8::String>, v8::Local<v8::Value> _style, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 150 "src/modules/Elm.gear"
    Value style(_style);
    elm_object_style_set(This["eo"], style.to<String>());
}

static v8::Handle<v8::Value> _Elm_Entry_visible(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 155 "src/modules/Elm.gear"
    return Value(evas_object_visible_get(This["eo"]));
}

static void _Elm_Entry_visible(v8::Local<v8::String>, v8::Local<v8::Value> _visible, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 158 "src/modules/Elm.gear"
    Value visible(_visible);
    if(visible)
        evas_object_show(This["eo"]);
    else
        evas_object_hide(This["eo"]);
}

static v8::Handle<v8::Value> _Elm_Entry_entry(v8::Local<v8::String>, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1142 "src/modules/Elm.gear"
    const char *entry;
    entry = elm_entry_entry_get(This["eo"]);
    return String(entry);
}

static void _Elm_Entry_entry(v8::Local<v8::String>, v8::Local<v8::Value> _text, const v8::AccessorInfo &args) {
    Value This(args.This());
    #line 1136 "src/modules/Elm.gear"
    Value text(_text);
    This["entry"] = text;
    elm_entry_entry_set(This["eo"], text);
}

static v8::Handle<v8::Value> _Elm_mainLoop(const v8::Arguments &args) {
    #line 38 "src/modules/Elm.gear"
    ecore_main_loop_begin();
    return undefined;
}

static v8::Handle<v8::Value> _Elm_toString(const v8::Arguments &args) {
    #line 36 "src/modules/Elm.gear"
    return String("[module Elm]");
}


#line 5452 "src/modules/Elm.cc"
static void _setup_Elm(Value _exports) {
    v8::Handle<v8::FunctionTemplate> _Elm_EvasObject = v8::FunctionTemplate::New(_Elm_EvasObject_EvasObject);
    _Elm_EvasObject->SetClassName(String("EvasObject"));
    _Elm_EvasObject->PrototypeTemplate()->SetAccessor(String("x"), _Elm_EvasObject_x, _Elm_EvasObject_x);
    _Elm_EvasObject->PrototypeTemplate()->SetAccessor(String("y"), _Elm_EvasObject_y, _Elm_EvasObject_y);
    _Elm_EvasObject->PrototypeTemplate()->SetAccessor(String("height"), _Elm_EvasObject_height, _Elm_EvasObject_height);
    _Elm_EvasObject->PrototypeTemplate()->SetAccessor(String("width"), _Elm_EvasObject_width, _Elm_EvasObject_width);
    _Elm_EvasObject->PrototypeTemplate()->SetAccessor(String("label"), _Elm_EvasObject_label, _Elm_EvasObject_label);
    _Elm_EvasObject->PrototypeTemplate()->SetAccessor(String("text"), _Elm_EvasObject_text, _Elm_EvasObject_text);
    _Elm_EvasObject->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_EvasObject_scale, _Elm_EvasObject_scale);
    _Elm_EvasObject->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_EvasObject_xalign, _Elm_EvasObject_xalign);
    _Elm_EvasObject->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_EvasObject_yalign, _Elm_EvasObject_yalign);
    _Elm_EvasObject->PrototypeTemplate()->SetAccessor(String("style"), _Elm_EvasObject_style, _Elm_EvasObject_style);
    _Elm_EvasObject->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_EvasObject_visible, _Elm_EvasObject_visible);
    _exports["EvasObject"] = _Elm_EvasObject->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Win = v8::FunctionTemplate::New(_Elm_Win_Win);
    _Elm_Win->SetClassName(String("Win"));
    _Elm_Win->PrototypeTemplate()->Set("resize", Function(_Elm_Win_resize, "resize"));
    _Elm_Win->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Win_x, _Elm_Win_x);
    _Elm_Win->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Win_y, _Elm_Win_y);
    _Elm_Win->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Win_height, _Elm_Win_height);
    _Elm_Win->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Win_width, _Elm_Win_width);
    _Elm_Win->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Win_label, _Elm_Win_label);
    _Elm_Win->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Win_text, _Elm_Win_text);
    _Elm_Win->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Win_scale, _Elm_Win_scale);
    _Elm_Win->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Win_xalign, _Elm_Win_xalign);
    _Elm_Win->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Win_yalign, _Elm_Win_yalign);
    _Elm_Win->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Win_style, _Elm_Win_style);
    _Elm_Win->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Win_visible, _Elm_Win_visible);
    _Elm_Win->PrototypeTemplate()->SetAccessor(String("title"), _Elm_Win_title, _Elm_Win_title);
    _Elm_Win->PrototypeTemplate()->SetAccessor(String("autodel"), _Elm_Win_autodel, _Elm_Win_autodel);
    _exports["Win"] = _Elm_Win->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Background = v8::FunctionTemplate::New(_Elm_Background_Background);
    _Elm_Background->SetClassName(String("Background"));
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Background_x, _Elm_Background_x);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Background_y, _Elm_Background_y);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Background_height, _Elm_Background_height);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Background_width, _Elm_Background_width);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Background_label, _Elm_Background_label);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Background_text, _Elm_Background_text);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Background_scale, _Elm_Background_scale);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Background_xalign, _Elm_Background_xalign);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Background_yalign, _Elm_Background_yalign);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Background_style, _Elm_Background_style);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Background_visible, _Elm_Background_visible);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("red"), _Elm_Background_red, _Elm_Background_red);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("green"), _Elm_Background_green, _Elm_Background_green);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("blue"), _Elm_Background_blue, _Elm_Background_blue);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("file"), _Elm_Background_file, _Elm_Background_file);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("group"), _Elm_Background_group, _Elm_Background_group);
    _Elm_Background->PrototypeTemplate()->SetAccessor(String("bgOption"), _Elm_Background_bgOption, _Elm_Background_bgOption);
    _exports["Background"] = _Elm_Background->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Box = v8::FunctionTemplate::New(_Elm_Box_Box);
    _Elm_Box->SetClassName(String("Box"));
    _Elm_Box->PrototypeTemplate()->Set("add", Function(_Elm_Box_add, "add"));
    _Elm_Box->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Box_x, _Elm_Box_x);
    _Elm_Box->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Box_y, _Elm_Box_y);
    _Elm_Box->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Box_height, _Elm_Box_height);
    _Elm_Box->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Box_width, _Elm_Box_width);
    _Elm_Box->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Box_label, _Elm_Box_label);
    _Elm_Box->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Box_text, _Elm_Box_text);
    _Elm_Box->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Box_scale, _Elm_Box_scale);
    _Elm_Box->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Box_xalign, _Elm_Box_xalign);
    _Elm_Box->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Box_yalign, _Elm_Box_yalign);
    _Elm_Box->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Box_style, _Elm_Box_style);
    _Elm_Box->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Box_visible, _Elm_Box_visible);
    _Elm_Box->PrototypeTemplate()->SetAccessor(String("homogenous"), _Elm_Box_homogenous, _Elm_Box_homogenous);
    _Elm_Box->PrototypeTemplate()->SetAccessor(String("horizontal"), _Elm_Box_horizontal, _Elm_Box_horizontal);
    _exports["Box"] = _Elm_Box->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Icon = v8::FunctionTemplate::New(_Elm_Icon_Icon);
    _Elm_Icon->SetClassName(String("Icon"));
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Icon_x, _Elm_Icon_x);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Icon_y, _Elm_Icon_y);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Icon_height, _Elm_Icon_height);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Icon_width, _Elm_Icon_width);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Icon_label, _Elm_Icon_label);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Icon_text, _Elm_Icon_text);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Icon_scale, _Elm_Icon_scale);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Icon_xalign, _Elm_Icon_xalign);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Icon_yalign, _Elm_Icon_yalign);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Icon_style, _Elm_Icon_style);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Icon_visible, _Elm_Icon_visible);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("file"), _Elm_Icon_file, _Elm_Icon_file);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("scaleDown"), _Elm_Icon_scaleDown, _Elm_Icon_scaleDown);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("scaleUp"), _Elm_Icon_scaleUp, _Elm_Icon_scaleUp);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("prescale"), _Elm_Icon_prescale, _Elm_Icon_prescale);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("animated"), _Elm_Icon_animated, _Elm_Icon_animated);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("animPlay"), _Elm_Icon_animPlay, _Elm_Icon_animPlay);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("smooth"), _Elm_Icon_smooth, _Elm_Icon_smooth);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("standard"), _Elm_Icon_standard, _Elm_Icon_standard);
    _Elm_Icon->PrototypeTemplate()->SetAccessor(String("fillOutside"), _Elm_Icon_fillOutside, _Elm_Icon_fillOutside);
    _exports["Icon"] = _Elm_Icon->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Button = v8::FunctionTemplate::New(_Elm_Button_Button);
    _Elm_Button->SetClassName(String("Button"));
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Button_x, _Elm_Button_x);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Button_y, _Elm_Button_y);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Button_height, _Elm_Button_height);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Button_width, _Elm_Button_width);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Button_label, _Elm_Button_label);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Button_text, _Elm_Button_text);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Button_scale, _Elm_Button_scale);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Button_xalign, _Elm_Button_xalign);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Button_yalign, _Elm_Button_yalign);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Button_style, _Elm_Button_style);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Button_visible, _Elm_Button_visible);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("autorepeat"), _Elm_Button_autorepeat, _Elm_Button_autorepeat);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("autorepeatInitTimeout"), _Elm_Button_autorepeatInitTimeout, _Elm_Button_autorepeatInitTimeout);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("autorepeatGapTimeout"), _Elm_Button_autorepeatGapTimeout, _Elm_Button_autorepeatGapTimeout);
    _Elm_Button->PrototypeTemplate()->SetAccessor(String("onClick"), _Elm_Button_onClick, _Elm_Button_onClick);
    _exports["Button"] = _Elm_Button->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Radio = v8::FunctionTemplate::New(_Elm_Radio_Radio);
    _Elm_Radio->SetClassName(String("Radio"));
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Radio_x, _Elm_Radio_x);
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Radio_y, _Elm_Radio_y);
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Radio_height, _Elm_Radio_height);
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Radio_width, _Elm_Radio_width);
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Radio_label, _Elm_Radio_label);
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Radio_text, _Elm_Radio_text);
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Radio_scale, _Elm_Radio_scale);
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Radio_xalign, _Elm_Radio_xalign);
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Radio_yalign, _Elm_Radio_yalign);
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Radio_style, _Elm_Radio_style);
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Radio_visible, _Elm_Radio_visible);
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("group"), _Elm_Radio_group, _Elm_Radio_group);
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("state"), _Elm_Radio_state, _Elm_Radio_state);
    _Elm_Radio->PrototypeTemplate()->SetAccessor(String("value"), _Elm_Radio_value, _Elm_Radio_value);
    _exports["Radio"] = _Elm_Radio->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Label = v8::FunctionTemplate::New(_Elm_Label_Label);
    _Elm_Label->SetClassName(String("Label"));
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Label_x, _Elm_Label_x);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Label_y, _Elm_Label_y);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Label_height, _Elm_Label_height);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Label_width, _Elm_Label_width);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Label_label, _Elm_Label_label);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Label_text, _Elm_Label_text);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Label_scale, _Elm_Label_scale);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Label_xalign, _Elm_Label_xalign);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Label_yalign, _Elm_Label_yalign);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Label_style, _Elm_Label_style);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Label_visible, _Elm_Label_visible);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("wrap"), _Elm_Label_wrap, _Elm_Label_wrap);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("wrapWidth"), _Elm_Label_wrapWidth, _Elm_Label_wrapWidth);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("wrapHeight"), _Elm_Label_wrapHeight, _Elm_Label_wrapHeight);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("fontSize"), _Elm_Label_fontSize, _Elm_Label_fontSize);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("textAlign"), _Elm_Label_textAlign, _Elm_Label_textAlign);
    _Elm_Label->PrototypeTemplate()->SetAccessor(String("ellipsis"), _Elm_Label_ellipsis, _Elm_Label_ellipsis);
    _exports["Label"] = _Elm_Label->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Flip = v8::FunctionTemplate::New(_Elm_Flip_Flip);
    _Elm_Flip->SetClassName(String("Flip"));
    _Elm_Flip->PrototypeTemplate()->Set("go", Function(_Elm_Flip_go, "go"));
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Flip_x, _Elm_Flip_x);
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Flip_y, _Elm_Flip_y);
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Flip_height, _Elm_Flip_height);
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Flip_width, _Elm_Flip_width);
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Flip_label, _Elm_Flip_label);
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Flip_text, _Elm_Flip_text);
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Flip_scale, _Elm_Flip_scale);
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Flip_xalign, _Elm_Flip_xalign);
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Flip_yalign, _Elm_Flip_yalign);
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Flip_style, _Elm_Flip_style);
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Flip_visible, _Elm_Flip_visible);
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("front"), _Elm_Flip_front, _Elm_Flip_front);
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("back"), _Elm_Flip_back, _Elm_Flip_back);
    _Elm_Flip->PrototypeTemplate()->SetAccessor(String("interaction"), _Elm_Flip_interaction, _Elm_Flip_interaction);
    _exports["Flip"] = _Elm_Flip->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_ActionSlider = v8::FunctionTemplate::New(_Elm_ActionSlider_ActionSlider);
    _Elm_ActionSlider->SetClassName(String("ActionSlider"));
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("x"), _Elm_ActionSlider_x, _Elm_ActionSlider_x);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("y"), _Elm_ActionSlider_y, _Elm_ActionSlider_y);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("height"), _Elm_ActionSlider_height, _Elm_ActionSlider_height);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("width"), _Elm_ActionSlider_width, _Elm_ActionSlider_width);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("label"), _Elm_ActionSlider_label, _Elm_ActionSlider_label);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("text"), _Elm_ActionSlider_text, _Elm_ActionSlider_text);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_ActionSlider_scale, _Elm_ActionSlider_scale);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_ActionSlider_xalign, _Elm_ActionSlider_xalign);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_ActionSlider_yalign, _Elm_ActionSlider_yalign);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("style"), _Elm_ActionSlider_style, _Elm_ActionSlider_style);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_ActionSlider_visible, _Elm_ActionSlider_visible);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("selectedLabel"), _Elm_ActionSlider_selectedLabel, _Elm_ActionSlider_selectedLabel);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("indicatorPos"), _Elm_ActionSlider_indicatorPos, _Elm_ActionSlider_indicatorPos);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("enabledPos"), _Elm_ActionSlider_enabledPos, _Elm_ActionSlider_enabledPos);
    _Elm_ActionSlider->PrototypeTemplate()->SetAccessor(String("magnetPos"), _Elm_ActionSlider_magnetPos, _Elm_ActionSlider_magnetPos);
    _exports["ActionSlider"] = _Elm_ActionSlider->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Scroller = v8::FunctionTemplate::New(_Elm_Scroller_Scroller);
    _Elm_Scroller->SetClassName(String("Scroller"));
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Scroller_x, _Elm_Scroller_x);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Scroller_y, _Elm_Scroller_y);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Scroller_height, _Elm_Scroller_height);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Scroller_width, _Elm_Scroller_width);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Scroller_label, _Elm_Scroller_label);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Scroller_text, _Elm_Scroller_text);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Scroller_scale, _Elm_Scroller_scale);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Scroller_xalign, _Elm_Scroller_xalign);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Scroller_yalign, _Elm_Scroller_yalign);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Scroller_style, _Elm_Scroller_style);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Scroller_visible, _Elm_Scroller_visible);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("content"), _Elm_Scroller_content, _Elm_Scroller_content);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("hBounce"), _Elm_Scroller_hBounce, _Elm_Scroller_hBounce);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("vBounce"), _Elm_Scroller_vBounce, _Elm_Scroller_vBounce);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("xPolicy"), _Elm_Scroller_xPolicy, _Elm_Scroller_xPolicy);
    _Elm_Scroller->PrototypeTemplate()->SetAccessor(String("yPolicy"), _Elm_Scroller_yPolicy, _Elm_Scroller_yPolicy);
    _exports["Scroller"] = _Elm_Scroller->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Slider = v8::FunctionTemplate::New(_Elm_Slider_Slider);
    _Elm_Slider->SetClassName(String("Slider"));
    _Elm_Slider->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Slider_x, _Elm_Slider_x);
    _Elm_Slider->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Slider_y, _Elm_Slider_y);
    _Elm_Slider->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Slider_height, _Elm_Slider_height);
    _Elm_Slider->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Slider_width, _Elm_Slider_width);
    _Elm_Slider->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Slider_label, _Elm_Slider_label);
    _Elm_Slider->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Slider_text, _Elm_Slider_text);
    _Elm_Slider->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Slider_scale, _Elm_Slider_scale);
    _Elm_Slider->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Slider_xalign, _Elm_Slider_xalign);
    _Elm_Slider->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Slider_yalign, _Elm_Slider_yalign);
    _Elm_Slider->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Slider_style, _Elm_Slider_style);
    _Elm_Slider->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Slider_visible, _Elm_Slider_visible);
    _exports["Slider"] = _Elm_Slider->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_List = v8::FunctionTemplate::New(_Elm_List_List);
    _Elm_List->SetClassName(String("List"));
    _Elm_List->PrototypeTemplate()->SetAccessor(String("x"), _Elm_List_x, _Elm_List_x);
    _Elm_List->PrototypeTemplate()->SetAccessor(String("y"), _Elm_List_y, _Elm_List_y);
    _Elm_List->PrototypeTemplate()->SetAccessor(String("height"), _Elm_List_height, _Elm_List_height);
    _Elm_List->PrototypeTemplate()->SetAccessor(String("width"), _Elm_List_width, _Elm_List_width);
    _Elm_List->PrototypeTemplate()->SetAccessor(String("label"), _Elm_List_label, _Elm_List_label);
    _Elm_List->PrototypeTemplate()->SetAccessor(String("text"), _Elm_List_text, _Elm_List_text);
    _Elm_List->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_List_scale, _Elm_List_scale);
    _Elm_List->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_List_xalign, _Elm_List_xalign);
    _Elm_List->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_List_yalign, _Elm_List_yalign);
    _Elm_List->PrototypeTemplate()->SetAccessor(String("style"), _Elm_List_style, _Elm_List_style);
    _Elm_List->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_List_visible, _Elm_List_visible);
    _exports["List"] = _Elm_List->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Check = v8::FunctionTemplate::New(_Elm_Check_Check);
    _Elm_Check->SetClassName(String("Check"));
    _Elm_Check->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Check_x, _Elm_Check_x);
    _Elm_Check->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Check_y, _Elm_Check_y);
    _Elm_Check->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Check_height, _Elm_Check_height);
    _Elm_Check->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Check_width, _Elm_Check_width);
    _Elm_Check->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Check_label, _Elm_Check_label);
    _Elm_Check->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Check_text, _Elm_Check_text);
    _Elm_Check->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Check_scale, _Elm_Check_scale);
    _Elm_Check->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Check_xalign, _Elm_Check_xalign);
    _Elm_Check->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Check_yalign, _Elm_Check_yalign);
    _Elm_Check->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Check_style, _Elm_Check_style);
    _Elm_Check->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Check_visible, _Elm_Check_visible);
    _Elm_Check->PrototypeTemplate()->SetAccessor(String("state"), _Elm_Check_state, _Elm_Check_state);
    _exports["Check"] = _Elm_Check->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Clock = v8::FunctionTemplate::New(_Elm_Clock_Clock);
    _Elm_Clock->SetClassName(String("Clock"));
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Clock_x, _Elm_Clock_x);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Clock_y, _Elm_Clock_y);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Clock_height, _Elm_Clock_height);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Clock_width, _Elm_Clock_width);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Clock_label, _Elm_Clock_label);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Clock_text, _Elm_Clock_text);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Clock_scale, _Elm_Clock_scale);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Clock_xalign, _Elm_Clock_xalign);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Clock_yalign, _Elm_Clock_yalign);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Clock_style, _Elm_Clock_style);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Clock_visible, _Elm_Clock_visible);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("hour"), _Elm_Clock_hour, _Elm_Clock_hour);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("minute"), _Elm_Clock_minute, _Elm_Clock_minute);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("second"), _Elm_Clock_second, _Elm_Clock_second);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("edit"), _Elm_Clock_edit, _Elm_Clock_edit);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("digitEdit"), _Elm_Clock_digitEdit, _Elm_Clock_digitEdit);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("showAMPM"), _Elm_Clock_showAMPM, _Elm_Clock_showAMPM);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("showSeconds"), _Elm_Clock_showSeconds, _Elm_Clock_showSeconds);
    _Elm_Clock->PrototypeTemplate()->SetAccessor(String("interval"), _Elm_Clock_interval, _Elm_Clock_interval);
    _exports["Clock"] = _Elm_Clock->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_ProgressBar = v8::FunctionTemplate::New(_Elm_ProgressBar_ProgressBar);
    _Elm_ProgressBar->SetClassName(String("ProgressBar"));
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("x"), _Elm_ProgressBar_x, _Elm_ProgressBar_x);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("y"), _Elm_ProgressBar_y, _Elm_ProgressBar_y);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("height"), _Elm_ProgressBar_height, _Elm_ProgressBar_height);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("width"), _Elm_ProgressBar_width, _Elm_ProgressBar_width);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("label"), _Elm_ProgressBar_label, _Elm_ProgressBar_label);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("text"), _Elm_ProgressBar_text, _Elm_ProgressBar_text);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_ProgressBar_scale, _Elm_ProgressBar_scale);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_ProgressBar_xalign, _Elm_ProgressBar_xalign);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_ProgressBar_yalign, _Elm_ProgressBar_yalign);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("style"), _Elm_ProgressBar_style, _Elm_ProgressBar_style);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_ProgressBar_visible, _Elm_ProgressBar_visible);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("pulse"), _Elm_ProgressBar_pulse, _Elm_ProgressBar_pulse);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("value"), _Elm_ProgressBar_value, _Elm_ProgressBar_value);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("spanSize"), _Elm_ProgressBar_spanSize, _Elm_ProgressBar_spanSize);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("unitFormat"), _Elm_ProgressBar_unitFormat, _Elm_ProgressBar_unitFormat);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("horizontal"), _Elm_ProgressBar_horizontal, _Elm_ProgressBar_horizontal);
    _Elm_ProgressBar->PrototypeTemplate()->SetAccessor(String("inverted"), _Elm_ProgressBar_inverted, _Elm_ProgressBar_inverted);
    _exports["ProgressBar"] = _Elm_ProgressBar->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Photo = v8::FunctionTemplate::New(_Elm_Photo_Photo);
    _Elm_Photo->SetClassName(String("Photo"));
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Photo_x, _Elm_Photo_x);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Photo_y, _Elm_Photo_y);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Photo_height, _Elm_Photo_height);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Photo_width, _Elm_Photo_width);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Photo_label, _Elm_Photo_label);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Photo_text, _Elm_Photo_text);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Photo_scale, _Elm_Photo_scale);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Photo_xalign, _Elm_Photo_xalign);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Photo_yalign, _Elm_Photo_yalign);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Photo_style, _Elm_Photo_style);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Photo_visible, _Elm_Photo_visible);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("image"), _Elm_Photo_image, _Elm_Photo_image);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("size"), _Elm_Photo_size, _Elm_Photo_size);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("fill"), _Elm_Photo_fill, _Elm_Photo_fill);
    _Elm_Photo->PrototypeTemplate()->SetAccessor(String("editable"), _Elm_Photo_editable, _Elm_Photo_editable);
    _exports["Photo"] = _Elm_Photo->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Spinner = v8::FunctionTemplate::New(_Elm_Spinner_Spinner);
    _Elm_Spinner->SetClassName(String("Spinner"));
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Spinner_x, _Elm_Spinner_x);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Spinner_y, _Elm_Spinner_y);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Spinner_height, _Elm_Spinner_height);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Spinner_width, _Elm_Spinner_width);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Spinner_label, _Elm_Spinner_label);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Spinner_text, _Elm_Spinner_text);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Spinner_scale, _Elm_Spinner_scale);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Spinner_xalign, _Elm_Spinner_xalign);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Spinner_yalign, _Elm_Spinner_yalign);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Spinner_style, _Elm_Spinner_style);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Spinner_visible, _Elm_Spinner_visible);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("labelFormat"), _Elm_Spinner_labelFormat, _Elm_Spinner_labelFormat);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("min"), _Elm_Spinner_min, _Elm_Spinner_min);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("max"), _Elm_Spinner_max, _Elm_Spinner_max);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("step"), _Elm_Spinner_step, _Elm_Spinner_step);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("value"), _Elm_Spinner_value, _Elm_Spinner_value);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("wrap"), _Elm_Spinner_wrap, _Elm_Spinner_wrap);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("editable"), _Elm_Spinner_editable, _Elm_Spinner_editable);
    _Elm_Spinner->PrototypeTemplate()->SetAccessor(String("interval"), _Elm_Spinner_interval, _Elm_Spinner_interval);
    _exports["Spinner"] = _Elm_Spinner->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Pane = v8::FunctionTemplate::New(_Elm_Pane_Pane);
    _Elm_Pane->SetClassName(String("Pane"));
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Pane_x, _Elm_Pane_x);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Pane_y, _Elm_Pane_y);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Pane_height, _Elm_Pane_height);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Pane_width, _Elm_Pane_width);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Pane_label, _Elm_Pane_label);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Pane_text, _Elm_Pane_text);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Pane_scale, _Elm_Pane_scale);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Pane_xalign, _Elm_Pane_xalign);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Pane_yalign, _Elm_Pane_yalign);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Pane_style, _Elm_Pane_style);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Pane_visible, _Elm_Pane_visible);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("contentLeft"), _Elm_Pane_contentLeft, _Elm_Pane_contentLeft);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("contentRight"), _Elm_Pane_contentRight, _Elm_Pane_contentRight);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("leftSize"), _Elm_Pane_leftSize, _Elm_Pane_leftSize);
    _Elm_Pane->PrototypeTemplate()->SetAccessor(String("horizontal"), _Elm_Pane_horizontal);
    _exports["Pane"] = _Elm_Pane->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Bubble = v8::FunctionTemplate::New(_Elm_Bubble_Bubble);
    _Elm_Bubble->SetClassName(String("Bubble"));
    _Elm_Bubble->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Bubble_x, _Elm_Bubble_x);
    _Elm_Bubble->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Bubble_y, _Elm_Bubble_y);
    _Elm_Bubble->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Bubble_height, _Elm_Bubble_height);
    _Elm_Bubble->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Bubble_width, _Elm_Bubble_width);
    _Elm_Bubble->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Bubble_label, _Elm_Bubble_label);
    _Elm_Bubble->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Bubble_text, _Elm_Bubble_text);
    _Elm_Bubble->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Bubble_scale, _Elm_Bubble_scale);
    _Elm_Bubble->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Bubble_xalign, _Elm_Bubble_xalign);
    _Elm_Bubble->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Bubble_yalign, _Elm_Bubble_yalign);
    _Elm_Bubble->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Bubble_style, _Elm_Bubble_style);
    _Elm_Bubble->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Bubble_visible, _Elm_Bubble_visible);
    _Elm_Bubble->PrototypeTemplate()->SetAccessor(String("content"), _Elm_Bubble_content, _Elm_Bubble_content);
    _Elm_Bubble->PrototypeTemplate()->SetAccessor(String("corner"), _Elm_Bubble_corner, _Elm_Bubble_corner);
    _exports["Bubble"] = _Elm_Bubble->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_ColorSelector = v8::FunctionTemplate::New(_Elm_ColorSelector_ColorSelector);
    _Elm_ColorSelector->SetClassName(String("ColorSelector"));
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("x"), _Elm_ColorSelector_x, _Elm_ColorSelector_x);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("y"), _Elm_ColorSelector_y, _Elm_ColorSelector_y);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("height"), _Elm_ColorSelector_height, _Elm_ColorSelector_height);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("width"), _Elm_ColorSelector_width, _Elm_ColorSelector_width);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("label"), _Elm_ColorSelector_label, _Elm_ColorSelector_label);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("text"), _Elm_ColorSelector_text, _Elm_ColorSelector_text);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_ColorSelector_scale, _Elm_ColorSelector_scale);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_ColorSelector_xalign, _Elm_ColorSelector_xalign);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_ColorSelector_yalign, _Elm_ColorSelector_yalign);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("style"), _Elm_ColorSelector_style, _Elm_ColorSelector_style);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_ColorSelector_visible, _Elm_ColorSelector_visible);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("red"), _Elm_ColorSelector_red, _Elm_ColorSelector_red);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("green"), _Elm_ColorSelector_green, _Elm_ColorSelector_green);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("blue"), _Elm_ColorSelector_blue, _Elm_ColorSelector_blue);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("alpha"), _Elm_ColorSelector_alpha, _Elm_ColorSelector_alpha);
    _Elm_ColorSelector->PrototypeTemplate()->SetAccessor(String("onChanged"), _Elm_ColorSelector_onChanged, _Elm_ColorSelector_onChanged);
    _exports["ColorSelector"] = _Elm_ColorSelector->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Calendar = v8::FunctionTemplate::New(_Elm_Calendar_Calendar);
    _Elm_Calendar->SetClassName(String("Calendar"));
    _Elm_Calendar->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Calendar_x, _Elm_Calendar_x);
    _Elm_Calendar->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Calendar_y, _Elm_Calendar_y);
    _Elm_Calendar->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Calendar_height, _Elm_Calendar_height);
    _Elm_Calendar->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Calendar_width, _Elm_Calendar_width);
    _Elm_Calendar->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Calendar_label, _Elm_Calendar_label);
    _Elm_Calendar->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Calendar_text, _Elm_Calendar_text);
    _Elm_Calendar->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Calendar_scale, _Elm_Calendar_scale);
    _Elm_Calendar->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Calendar_xalign, _Elm_Calendar_xalign);
    _Elm_Calendar->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Calendar_yalign, _Elm_Calendar_yalign);
    _Elm_Calendar->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Calendar_style, _Elm_Calendar_style);
    _Elm_Calendar->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Calendar_visible, _Elm_Calendar_visible);
    _exports["Calendar"] = _Elm_Calendar->GetFunction();
    v8::Handle<v8::FunctionTemplate> _Elm_Entry = v8::FunctionTemplate::New(_Elm_Entry_Entry);
    _Elm_Entry->SetClassName(String("Entry"));
    _Elm_Entry->PrototypeTemplate()->SetAccessor(String("x"), _Elm_Entry_x, _Elm_Entry_x);
    _Elm_Entry->PrototypeTemplate()->SetAccessor(String("y"), _Elm_Entry_y, _Elm_Entry_y);
    _Elm_Entry->PrototypeTemplate()->SetAccessor(String("height"), _Elm_Entry_height, _Elm_Entry_height);
    _Elm_Entry->PrototypeTemplate()->SetAccessor(String("width"), _Elm_Entry_width, _Elm_Entry_width);
    _Elm_Entry->PrototypeTemplate()->SetAccessor(String("label"), _Elm_Entry_label, _Elm_Entry_label);
    _Elm_Entry->PrototypeTemplate()->SetAccessor(String("text"), _Elm_Entry_text, _Elm_Entry_text);
    _Elm_Entry->PrototypeTemplate()->SetAccessor(String("scale"), _Elm_Entry_scale, _Elm_Entry_scale);
    _Elm_Entry->PrototypeTemplate()->SetAccessor(String("xalign"), _Elm_Entry_xalign, _Elm_Entry_xalign);
    _Elm_Entry->PrototypeTemplate()->SetAccessor(String("yalign"), _Elm_Entry_yalign, _Elm_Entry_yalign);
    _Elm_Entry->PrototypeTemplate()->SetAccessor(String("style"), _Elm_Entry_style, _Elm_Entry_style);
    _Elm_Entry->PrototypeTemplate()->SetAccessor(String("visible"), _Elm_Entry_visible, _Elm_Entry_visible);
    _Elm_Entry->PrototypeTemplate()->SetAccessor(String("entry"), _Elm_Entry_entry, _Elm_Entry_entry);
    _exports["Entry"] = _Elm_Entry->GetFunction();
    _exports["mainLoop"] = Function(_Elm_mainLoop, "mainLoop");
    _exports["toString"] = Function(_Elm_toString, "toString");

        eina_init();
        ecore_init();
        elm_init(0, NULL);
    
}
static Module _module_Elm("Elm", _setup_Elm);