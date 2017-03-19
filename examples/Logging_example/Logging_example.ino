#include <Logging.h>

/*!
* This example show some examples to use the Log library
*
* Have fun
* mrRobot@web.de
*/

// we need a Log object

#define LOGLEVEL LOG_LEVEL_DEBUG

int myInt1, myInt2;
long myLong1, myLong2;
bool myBool1, myBool2;
char* myString = "this is a string";

void setup() {
    Log.Init(LOGLEVEL, 38400L, AUTO_NEWLINE_ON);
    Log.Info("******************************************");
    Log.Info("My favorite output stuff in future :-)");
    Log.Info("******************************************");
    myInt1 = 232;
    myInt2 = 32199;
    myLong1 = 99403020;
    myLong2 = 45021;
    myBool1 = true;
    myBool2 = !myBool1;
}

void loop() {
    Log.Info("Display my integers myInt1 %d, myInt2 %d", myInt1, myInt2);
    Log.Info("Display as hex myInt1=%x, myInt1=%X", myInt1, myInt1);
    Log.Info("Display as hex myInt2=%x, myInt2=%X", myInt2, myInt2);
    Log.Info("Display as binary myInt1=%b, myInt1=%B", myInt1, myInt1);
    Log.Info("Display as binary myInt2=%b, myInt2=%B", myInt2, myInt2);
    Log.Info("Display my longs myLong1 %l, myLong2=%l", myLong1, myLong2);
    Log.Info("Display my bool myBool1=%t, myBool2=%T", myBool1, myBool2);
    Log.Info("Output: %s", myString);
    Log.Error("is this an real error? %T", myBool2);
    Log.Debug("%d, %d, %l, %l, %t, %T", myInt1, myInt2,
              myLong1, myLong2,
              myBool1, myBool2);
    Log.Info("have fun with this Log");
    delay(5000);
}
