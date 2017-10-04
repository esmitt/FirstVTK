Rendering a cone using VTK
===================
Render a simple cone using VTK version 8.0.1. It handles a mouse interactor over the rendered window.

You need CMake to executed it properly. In *CMakeLists.txt* notice my local path in line 5:
``SET(VTK_DIR C:/VTK/build)``

After running, it should looks like:
 
![Cone](https://i.imgur.com/mXCDPYB.jpg) 
(see on [imgur])

> <i class="icon-pencil"> In Visual Studio, go to Project's Properties --> Debugging --> Environment and set **PATH=%PATH%;%VTK_DIR%**.
> **VTK_DIR** is set into global environment where all dlls files (after VTK building) are placed (in my case C:\VTK\build\bin\Debug)

_This code was compiled and executed using Visual Studio Community 2017_

[imgur]: https://imgur.com/mXCDPYB