// Brian lucero
// heart program:
// Purpose: to print out the heart emoji 100,000 times in a text document

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// global file stream operators
std::ifstream infile;
std::ofstream outfile;

string input_filename = "heart_emoji.txt";
string output_filename = "one_million.txt";

void open_IO_files() {
    infile.open(input_filename);
    if (infile.fail()) {
        std::cout << "Error reading input file.\n";
        exit(1);
    } 
    outfile.open(output_filename);
    if (outfile.fail()) {
        std::cout << "Error opening output file.\n";
        exit(1);
    } 
}

void close_IO_files() {
    infile.close();
    outfile.close();
}

string get_text() {
    string text;
    do {
        getline(infile, text);
    } while (getline(infile, text));

    cout << "\nget_text() -- DONE, The text from the chosen txt file is:  " << text << endl;
    return text;
}

void print_hunnidthou_times(string text) {
    for (int i = 0; i < 100000; ++i) {
        outfile << text;
    }
    cout << "-- Printed " << text << " 100000 times. --" << endl;
}

void print_1mil_times(string text) {
    for (int i = 0; i < 1000000; ++i) {
        outfile << text;
    }
    cout << "-- Printed " << text << " 1000000 times. --" << endl;
}


int main() {

    open_IO_files();
    string text = get_text();

    // outfile << "```\n";

    print_hunnidthou_times(text);
    print_hunnidthou_times(text);
    print_hunnidthou_times(text);
    print_hunnidthou_times(text);
    print_hunnidthou_times(text);

    print_hunnidthou_times(text);
    print_hunnidthou_times(text);
    print_hunnidthou_times(text);
    print_hunnidthou_times(text);
    print_hunnidthou_times(text);

    // print_1mil_times(text);
    // print_1mil_times(text);
    // print_1mil_times(text);
    // print_1mil_times(text);
    // print_1mil_times(text);

    outfile << "\n\n-----------------------------------------------------------------------------\n"
            << " I just wrote some source code that prints the heart emoji 1 million times, \n"
            << " The original file is actually 6 million, but it's also 36 mb and fb messenger\n"
            << "   only allows for 26mb support in one message.\n\n"
            << " - b ❤️";

    // outfile << "\n```";

    close_IO_files();

}