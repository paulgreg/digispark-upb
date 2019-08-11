# Digispark-usb

That program should be flashed on a digispark.

It uses [UniquePasswordBuilder](https://paulgreg.me/UniquePasswordBuilder/#pwa), which Firefox extension should be installed on your browser.

Project is described here : https://hackaday.io/project/167041-grandma-password-manager-helper
When tapping the button, UniquePasswordBuilder is opened by shortcut, then master password is entered, validated and computed password is pasted on current field.

It helps using a password manager.

Beware : while it helps to use a unique and strong password for each site, that tool make it very easy to steal your master password.

Before compiling, copy `password.h.dist` into `password.h` and change the typed password inside.

# Links

 * [hackaday page](https://hackaday.io/project/167041-grandma-password-manager-helper)
 * [Digispark tutorials/connecting](https://digistump.com/wiki/digispark/tutorials/connecting)
 * [Digispark tutorials/basics](https://digistump.com/wiki/digispark/tutorials/basics)
 * [How to connect a button](https://digistump.com/board/index.php?topic=1145.0)
 * [Digispark ATtiny85 – Cheap “USB Rubber Ducky”](https://0xdeadcode.se/archives/581)
 * [DigiKeyboard.h](https://github.com/digistump/DigisparkArduinoIntegration/blob/master/libraries/DigisparkKeyboard/DigiKeyboard.h)


