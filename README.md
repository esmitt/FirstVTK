Rendering a cone using VTK
===================
Render a simple cone using VTK version 8.1.0. It handles a mouse interactor over the rendered window.

You need CMake to executed it properly. After running, it should looks like:
 
![Cone](https://i.imgur.com/mXCDPYB.jpg) 
(see on [imgur])

In Windows, remember to add the DLLs into the environment. Also, using Visual Studio, go to Project's Properties --> Debugging --> Environment and set **PATH=%PATH%;%VTK_DIR%**. **VTK_DIR** is set into global environment where all dlls files (after VTK building) are placed (in my case C:\VTK\build\bin\Debug)

_This code was compiled and executed using Visual Studio Community 2017_

###### If you want to contribute to this project and make it better, your help is very welcome.

[imgur]: https://imgur.com/mXCDPYB