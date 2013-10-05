Tetrisplosion
=============

Tetrisplosion
=============

Installation on Windows
------------

1) Install CMake (at-least version 2.8)

2) Download SFML, and place in the following directory:
  c:\sfml-2.1\
  
3) Run CMake, and set the following:

  - Where is the source code: c:/sfml-2.1-source
  - Where to build the binaries: c:/sfml-2.1-source/bin
  - BUILD_SHARED_LIBS : true
  - CMAKE_BUILD_TYPE : Release
  - CMAKE_INSTALL_PREFIX : C:/sfml-2.1
  - GLEW_INCLUDE_PATH : c:/sfml-2.1-source/extlibs/headers
  - GLEW_LIBRARY : c:/sfml-2.1-source/extlibs/libs-msvc/x64/glew.lib
  - SFML_BUILD_DOC : false
  - SFML_BUILD_EXAMPLES : false
  - SFML_USE_STATIC_STD_LIBS : false
  
Press Configure.
 - (Use Visual Studio 11 Win64 if it comes up as default option).
 - It should say "Configuring done" without any errors.

4) Now that you have generated the VisualStudio solution file, open SFML.sln (open VS using administrator mode, helped with some permission errors when I did it.)
 - Right click on the ALL_BUILD project, and build for both debug/release for x64.
 - This one is important, right click on the INSTALL project inside the CMake visual studio filter, and build it explicitely, you should see similar output:

1>------ Build started: Project: INSTALL, Configuration: Debug x64 ------
1>  -- Install configuration: "Debug"
1>  -- Installing: C:/Program Files/SFML/./include
1>  -- Installing: C:/Program Files/SFML/./include/SFML
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Audio
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Audio/Export.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Audio/Listener.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Audio/Music.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Audio/Sound.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Audio/SoundBuffer.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Audio/SoundBufferRecorder.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Audio/SoundRecorder.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Audio/SoundSource.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Audio/SoundStream.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Audio.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Config.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/BlendMode.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/CircleShape.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Color.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/ConvexShape.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Drawable.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Export.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Font.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Glyph.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Image.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/PrimitiveType.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Rect.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Rect.inl
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/RectangleShape.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/RenderStates.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/RenderTarget.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/RenderTexture.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/RenderWindow.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Shader.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Shape.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Sprite.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Text.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Texture.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Transform.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Transformable.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/Vertex.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/VertexArray.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics/View.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Graphics.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Network
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Network/Export.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Network/Ftp.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Network/Http.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Network/IpAddress.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Network/Packet.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Network/Socket.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Network/SocketHandle.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Network/SocketSelector.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Network/TcpListener.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Network/TcpSocket.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Network/UdpSocket.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Network.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/OpenGL.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Clock.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Err.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Export.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/InputStream.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Lock.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Mutex.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/NonCopyable.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Sleep.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/String.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/String.inl
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Thread.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Thread.inl
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/ThreadLocal.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/ThreadLocalPtr.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/ThreadLocalPtr.inl
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Time.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Utf.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Utf.inl
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Vector2.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Vector2.inl
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Vector3.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System/Vector3.inl
1>  -- Installing: C:/Program Files/SFML/./include/SFML/System.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window/Context.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window/ContextSettings.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window/Event.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window/Export.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window/GlResource.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window/Joystick.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window/Keyboard.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window/Mouse.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window/VideoMode.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window/Window.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window/WindowHandle.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window/WindowStyle.hpp
1>  -- Installing: C:/Program Files/SFML/./include/SFML/Window.hpp
1>  -- Installing: C:/Program Files/SFML/./cmake/Modules/FindSFML.cmake
1>  -- Installing: C:/Program Files/SFML/./license.txt
1>  -- Installing: C:/Program Files/SFML/./readme.txt
1>  -- Installing: C:/Program Files/SFML/bin/libsndfile-1.dll
1>  -- Installing: C:/Program Files/SFML/bin/openal32.dll
1>  -- Installing: C:/Program Files/SFML/lib/sfml-system-d.lib
1>  -- Installing: C:/Program Files/SFML/bin/sfml-system-d-2.dll
1>  -- Installing: C:/Program Files/SFML/lib/sfml-window-d.lib
1>  -- Installing: C:/Program Files/SFML/bin/sfml-window-d-2.dll
1>  -- Installing: C:/Program Files/SFML/lib/sfml-network-d.lib
1>  -- Installing: C:/Program Files/SFML/bin/sfml-network-d-2.dll
1>  -- Installing: C:/Program Files/SFML/lib/sfml-graphics-d.lib
1>  -- Installing: C:/Program Files/SFML/bin/sfml-graphics-d-2.dll
1>  -- Installing: C:/Program Files/SFML/lib/sfml-audio-d.lib
1>  -- Installing: C:/Program Files/SFML/bin/sfml-audio-d-2.dll
1>  -- Installing: C:/Program Files/SFML/lib/sfml-main-d.lib
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========

 * Once finished, repeat for Release.
 
5) One last required step, open up the following directory:
  - C:\sfml-2.1-source\cmake\Modules
  
Copy each file (FindGLEW.cmake, FindSFML.cmake, and FindSndfile.cmake) into the 'C:\Program Files (x86)\CMake 2.8\share\cmake-2.8\Modules' directory.

Install Tetsplosion
-----------

I installed mine to my destkop, but here's what I did.
 - Set "Where is the source code: " to 'C:/Users/BENJAMIN/Desktop/Tetrisplosion-source'
 - Set "Where to build the binaries: " to 'C:/Users/BENJAMIN/Desktop/Tetrisplosion-source/build'
 - Set the CMAKE_INSTALL_PREFIX to ''
 - Set the SFML_INCLUDE_DIR to 'C:/sfml-2.1-source/include'
 - Configure/Generate.

When I went to run the Tetrisplosion project, I received an error telling me it couldn't find the correct SFML dll files (we're dynamically linking atm, may change that IDK). I had top copy all the .dll files from 'C:\sfml-2.1-source\bin\lib\Debug' to 'C:\Users\BENJAMIN\Desktop\Tetrisplosion\bin\Debug' then press the green triangle to get the program to start (don't forget to set the "Set as StartUp Project" for tetrisplosion project. You should see an OpenGL window pop open, and "test_fn()" written to the console window.
