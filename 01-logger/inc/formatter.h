#pragma once

/*
 *#include <iostream>
 *#include <string>
 *#include <sstream>
 *#include <string_view>
 */

#include <stdio.h>

/*
 *namespace fmt
 *{
 *    template<typename T>
 *    void format_helper(std::ostringstream& oss, std::string_view& str, const T& value)
 *    {
 *        std::size_t open_bracket = str.find('{');
 *        if (open_bracket == std::string::npos) return;
 *        std::size_t close_bracket = str.find('}', open_bracket+1);
 *        if (close_bracket == std::string::npos) return;
 *        
 *        oss << str.substr(0, open_bracket) << value;
 *        str = str.substr(close_bracket + 1);
 *    }
 *
 *    template<typename... Args>
 *    std::string format(std::string_view str, Args... args)
 *    {
 *        std::ostringstream oss;
 *        (format_helper(oss, str, args), ...);
 *        oss << str;
 *        return oss.str();
 *    }
 *}
 */

