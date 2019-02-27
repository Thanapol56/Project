# Compile on Windows 10

1. Donwload zip file https://github.com/songritk/Project
2. extract Project-master.zip
3. เปิด terminal console (โปรแกรม cmd) ไปที่ directory Project-master\Project-master\checkRGB
4. Compile

```bash
copy CMakeLists-Win.txt CMakeLists.txt
cmake  -G "Visual Studio 15 2017 Win64" .
cmake --build . --config Relase
```
