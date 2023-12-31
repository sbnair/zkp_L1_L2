#include <string>
#include <vector>
#include <utility>
#include <protocols/print_helpers.hpp>

#ifndef __SPECS_PRINT_HPP__
#define __SPECS_PRINT_HPP__

namespace libstark{
    
    class specsPrinter{
    public:
    specsPrinter(const std::string title, const bool custom = false);
    void addLine(const std::string name, const std::string val);
    void print()const;

    private:
        std::string title_;
        bool custom_;
        std::vector<std::pair<std::string,std::string>> data_;
    };

} // namespace libstark

#endif //#ifndef __SPECS_PRINT_HPP__
