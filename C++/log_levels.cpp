#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    auto pos = line.find(" ");
    return line.substr(pos + 1);
}

std::string log_level(std::string line) {
    // return the log level
    auto posOpenBracket = line.find("[");
    auto posClosedBracket = line.find("]");
    auto strLength = posClosedBracket - posOpenBracket - 1;
    return line.substr(posOpenBracket + 1, strLength);
    return line;
}

std::string reformat(std::string line) {
    // return the reformatted message
    return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line

