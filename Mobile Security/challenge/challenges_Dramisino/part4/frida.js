Interceptor.attach(Module.getExportByName("libsafetynetchallengepart.so", "_Z34o_54832dacb65f7c6e96c8b10f0795d249v"), {
    onEnter: function (args) {
        console.log("nativeUsernameValidation");

        var param_1 = args[0];
        var username = Memory.readCString(param_1);
        console.log(username);
    },
    onLeave: function (retval) {

        var resultBytes = Memory.readByteArray(retval,50);


        console.log( resultBytes);
    }
});


