# FastMM4CPP
Use FastMM for memory management in CPlusPlus

FastMM, as you may known, is a very great memory management project for Delphi/C++Builder(although it's not as FAST 
in (heavy) multi threaded situations as in single thread situations by now), but it can not be used directly in 
Visual C++, and that's the reason why this repo's created.

P.S: TCMALLOC is great too but, it's not a bad idea to try FASTMM in the CPP world:)


HOW TO USE:</br>
1) compile FastMM4CPlusPlus.dpr and we will get a .dll file;</br>
2) use dumpbin.exe to generate .def file;</br>
3) via lib.exe we could get the needed .lib file which could be linked by Visual C++;</br>
4) inlucde FastMemory.h in your project;</br>
5) just TRY it.</br>

For more information, you can refer to: http://user.qzone.qq.com/395588677/blog/1367993037
