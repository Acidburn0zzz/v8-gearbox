/*
 * Copyright (c) 2011 Eduard Burtescu
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

#ifndef V8_GEARBOX_CONTEXT_H
#define V8_GEARBOX_CONTEXT_H

#include <v8-gearbox.h>

namespace Gearbox {
    class Context {
        public:
            Context();
            
            virtual ~Context();
            
            Value global() {
                return m_hContext->Global();
            }
            
            Value runScript(String source, String name);
            
            static Context *getCurrent() {
                return m_pCurrentContext;
            }
            
        private:
            virtual void setup();
            
            v8::Persistent<v8::Context> m_hContext;
            
            Context *m_pPreviousContext;
            
            static Context *m_pCurrentContext;
    };
}

#endif
