


document.querySelector('.mybutton').addEventListener('click', function(){
    //Mosule["mylib"]
    //const lib = mylib();
    //console.log("mylib", mylib);
    //console.log("lib", lib);
    //Module["gogo_test"] = function() {
        console.log("fofofofofo");
    //}
    var result = Module.ccall('myFunction', // name of C function
        null, // return type
        null, // argument types
        null); // arguments
});
      