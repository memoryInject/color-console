
# Color Console

Header only c++ library for coloring and formatting console outputs.  
To more about how bash output colors and formats, please check out: https://misc.flogisoft.com/bash/tip_colors_and_formatting   

This utility make it simple to add special characters for bash outputs.
## Screenshots

![App Screenshot](https://res.cloudinary.com/memoryinject/image/upload/h_458,c_scale/v1647977249/color_console_y500pd.png)


## Usage/Examples
Simply include `color_console.hpp` to the file, then use `console` object to created colored and formatted outputs, a basic usage looks like this:

```cpp
#include "color_console.hpp"
#inclide <iostream>

using namespace std;

int main() 
{
    // To get the formatted string 
    cout << console.get("Hello World!", { console.red, console.bold }) << endl;

    // To print the formatted string output
    console.print("Hello World!", { console.green, console.bg_red });

    return 0;
}
```

As you can see from the above code all the operations are done using `console` object.   
`console.get(<std::string>, <std::vector<std::string>>)`   
To get basic formatted string output use `console.get()`, it accept two arguments first one is a string to output, 
second one is a vector of format code special character strings which is comes with `console` object.   
To print directly to console use `console.print()`, the arguments are same as `console.get()`.

Here are all the available format codes, use them in the second arguments of `cosnole.get()` or `console.print()`   

```cpp
// Reset all
// Reset is a special one no need to use it, it's there for internal formatting.
console.reset

// Format
console.bold
console.dim
console.underline
console.blink
console.invert
console.hide

// Forground (text)
console.black
console.red
console.green
console.yellow
console.blue
console.magenta
console.cyan
console.gray
console.dark_gray
console.light_red
console.light_green
console.light_yellow
console.light_blue
console.light_magenta
console.light_cyan
console.white

// Background
console.bg_black
console.bg_red
console.bg_green
console.bg_yellow
console.bg_blue
console.bg_magenta
console.bg_cyan
console.bg_gray
console.bg_dark_gray
console.bg_light_red
console.bg_light_green
console.bg_light_yellow
console.bg_light_blue
console.bg_light_magenta
console.bg_light_cyan
console.bg_white
```

There are few preset built-in with `console`, it's just looks like JavaScript:

```cpp

#include "color_console.hpp"

int main() 
{
    // Print to console output - presets
    // Presets does not take second argument, just the string
    console.log("Hello World!, log");
    console.info("Hello World!, info");
    console.debug("Hello World!, debug");
    console.warn("Hello World!, warn");
    console.error("Hello World!, error");

    return 0;
}

```

If you want to modify default format for these preset use `console.set_<preset>(<std::vector<std::string>>)` like this:  

```cpp

#include "color_console.hpp"

int main() 
{
    // Change console preset settings
    console.log("Hello World!, log before");
    console.set_log({ console.cyan, console.underline });
    console.log("Hello World!, log after");

    // Also reset the preset to default
    console.reset_log();
    console.log("Hello World!, log reset");

    // Change info preset
    console.set_info({ 
        console.light_magenta, 
        console.bold, 
        console.underline
    });
    console.info("Hello World!, info new preset");
    
    // Change debug preset
    console.set_info({ 
        console.yellow, 
        console.invert
    });
    console.debug("Hello World!, debug new preset");

    console.info("Hello World!, info new preset");
    console.debug("Hello World!, debug new preset");

    // Reset all preset back to default
    console.reset_all();
    console.info("Hello World!, info reset");
    console.debug("Hello World!, debug reset");

    return 0;
}

```


All these examples can be found on `color_console_example.cpp` file.  
## License

[MIT](https://choosealicense.com/licenses/mit/)


