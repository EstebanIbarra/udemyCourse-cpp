# Class 2.5 - Basic Input/Output

    => <iostream>
        -> Header in which the std::basic_ostream (std::ostream) and std::basic_istream (std::istream) are declared
    => std::basic_ostream
        -> Class responsible for console output.
        -> Type definition: std::ostream
    => std::basic_istream
        -> Class responsible for console input
        -> Type definition: std::istream
    => std::cout
        -> Object of Class std::ostream that represents the console
        -> To write anything in the console we need to insert the data into de cout object using the insertion operator (<<)
    => std::cin
        -> Object of Class std::istream that grabs the characters typed in the keyboard
        -> To read anything from the keyboard we need to extract the characters in the cin object through the extraction operator (>>)
        -> cin includes and endl modifier, so it's not necessary to add a new line in subsequent cout statements
        -> cin stops reading if a whitespace is encountered, to get lines with whitespaces in it we should use the cin method getline(char[] buffer, int sizeOfBuffer, char finalCharacter)
    => New line statements
        -> '\n' creates the character for New Line, but doesn't flush the buffer.
        -> endl modifier creates a line carriage and also flushes the buffer.
