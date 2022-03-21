#include "color_console.hpp"
#include <iostream>

using namespace std;

int main()
{
    cout << console.get("Hello", { console.red, console.bold, console.bg_cyan }) << endl;
    console.print("world", { console.red, console.underline });
    console.print("world", { console.blink });
    console.print("world empty", {});

    console.log("hello world!, log");
    console.info("hello world!, info");
    console.warn("hello world!, warning");
    console.error("hello world!, error");
    console.debug("hello world!, debug");

    console.set_log({ console.magenta, console.bold, console.bg_dark_gray });
    console.log("hello world!, after set_log, log");
    console.reset_log();
    console.log("hello world!, after reset_log, log");

    console.set_info({console.light_cyan, console.underline});
    console.info("hello world!, after set_info, info");
    console.reset_all();
    console.info("hello world!, after reset_all, info");

    return 0;
}
