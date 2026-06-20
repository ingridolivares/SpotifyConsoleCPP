#ifndef UI_H
#define UI_H

#include <string>

namespace ui{
    void separator();
    void doubleSeparator();
    void pause();
    void clear();
    void title(const std::string&text);
}

namespace utils{
    std::string toLower(std::string text);
}

#endif