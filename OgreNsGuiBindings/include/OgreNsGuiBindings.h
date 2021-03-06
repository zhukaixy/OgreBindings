////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __GUI_GUIWRAPPER_H__
#define __GUI_GUIWRAPPER_H__


////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis kernel management
////////////////////////////////////////////////////////////////////////////////////////////////////
//@{
extern "C" void Noesis_Init();
extern "C" void Noesis_Shutdown();
extern "C" void Noesis_Tick();
//@}

////////////////////////////////////////////////////////////////////////////////////////////////////
// Loads the specified XAML file and creates a Renderer for it using the given surface
////////////////////////////////////////////////////////////////////////////////////////////////////
extern "C" void Noesis_LoadXAML(void** root, void** uiRenderer, const char* xamlFile,
    const char* resourcesFile = 0);

////////////////////////////////////////////////////////////////////////////////////////////////////
// Modifies renderer settings
////////////////////////////////////////////////////////////////////////////////////////////////////
//@{
extern "C" void Noesis_RendererAntialiasingMode(void* uiRenderer, int mode);
extern "C" void Noesis_RendererTessMode(void* uiRenderer, int mode);
extern "C" void Noesis_RendererTessQuality(void* uiRenderer, int quality);
extern "C" void Noesis_RendererFlags(void* uiRenderer, int flags);
//@}

////////////////////////////////////////////////////////////////////////////////////////////////////
// Updates and renders the specified renderer
////////////////////////////////////////////////////////////////////////////////////////////////////
extern "C" void Noesis_Update(void* uiRenderer, double time, int width, int height);
extern "C" void Noesis_GPURenderOffscreen(void* uiRenderer);
extern "C" void Noesis_GPURender(void* uiRenderer);

////////////////////////////////////////////////////////////////////////////////////////////////////
// Tests if mouse is over any UI element
////////////////////////////////////////////////////////////////////////////////////////////////////
extern "C" bool Noesis_HitTest(void* root, float x, float y);

////////////////////////////////////////////////////////////////////////////////////////////////////
// Renderer input events
////////////////////////////////////////////////////////////////////////////////////////////////////
//@{
extern "C" void Noesis_MouseButtonDown(void* uiRenderer, float x, float y, int button);
extern "C" void Noesis_MouseButtonUp(void* uiRenderer, float x, float y, int button);
extern "C" void Noesis_MouseDoubleClick(void* uiRenderer, float x, float y, int button);
extern "C" void Noesis_MouseMove(void* uiRenderer, float x, float y);
extern "C" void Noesis_MouseWheel(void* uiRenderer, float x, float y, int wheelRotation);

extern "C" void Noesis_KeyDown(void* uiRenderer, int key);
extern "C" void Noesis_KeyUp(void* uiRenderer, int key);
extern "C" void Noesis_Char(void* uiRenderer, wchar_t ch);
//@}


#endif
