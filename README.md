# wasm-sample-library


```
git clone https://github.com/emscripten-core/emsdk.git
cd emsdk
./emsdk install 1.40.1
./emsdk activate 1.40.1
cd ..
```

```
mkdir build
cd build
emcmake cmake .. -G "Ninja" -DCMAKE_MAKE_PROGRAM="D:\Proj\wasm-sample-library\tools\ninja.exe"
cmake --build . -j8
```


// cmake DCMAKE_TOOLCHAIN_FILE=<EmscriptenRoot>/cmake/Modules/Platform/Emscripten.cmake



```
cd build/wasm-app
python -m http.server 8080
```



```
cd app
python -m http.server 8080
```
