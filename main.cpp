#include <iostream>
#include <sstream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;


int ansi_colors[32]{
    //foreground
    30, //black
    31, //red
    32, //green
    33, //yellow
    34, //blue
    35, //magenta
    36, //cyan
    37, //white
    90, //bright_black
    91, //bright_red
    92, //bright_green
    93, //bright_yellow
    94, //bright_blue
    95, //bright_magenta
    96, //bright_cyan
    97, //bright_white

    //background
    40, //black
    41, //red
    42, //green
    43, //yellow
    44, //blue
    45, //magenta
    46, //cyan
    47, //white
    100, //bright_black
    101, //bright_red
    102, //bright_green
    103, //bright_yellow
    104, //bright_blue
    105, //bright_magenta
    106, //bright_cyan
    107 //bright_white
};


void print_color(int value) {
    stringstream ss;
    ss << "\033[1;" << ansi_colors[value] << "m" << "Hello World!" << "\033[0m";
    cout << ss.str() << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

int main() {
    //print foreground Colors
    for (int value{ 0 }; value < 16; value++) {
        print_color(value);
    }
    //print background Colors
    for (int value{ 16 }; value < 32; value++) {
        print_color(value);
    }

    return(0);
}