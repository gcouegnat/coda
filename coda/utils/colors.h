#ifndef COLORS_H
#define COLORS_H

namespace       coda {

namespace       colors {

#ifdef TERM_WITH_COLORS
const           std::string nocolor = "\033[0m";
const           std::string white = "\033[37m";
const           std::string red = "\033[31m";
const           std::string green = "\033[32m";
const           std::string yellow = "\033[33m";
const           std::string blue = "\033[34m";
const           std::string magenta = "\033[35m";
const           std::string cyan = "\033[36m";
const           std::string bold_white = "\033[1;37m";
const           std::string bold_red = "\033[1;31m";
const           std::string bold_green = "\033[1;32m";
const           std::string bold_yellow = "\033[1;33m";
const           std::string bold_blue = "\033[1;34m";
const           std::string bold_magenta = "\033[1;35m";
const           std::string bold_cyan = "\033[1;36m";
#else
const           std::string nocolor = "";
const           std::string white = "";
const           std::string red = "";
const           std::string green = "";
const           std::string yellow = "";
const           std::string blue = "";
const           std::string magenta = "";
const           std::string cyan = "";
const           std::string bold_white = "";
const           std::string bold_red = "";
const           std::string bold_green = "";
const           std::string bold_yellow = "";
const           std::string bold_blue = "";
const           std::string bold_magenta = "";
const           std::string bold_cyan = "";

#endif
}
}				/* end of namespace coda */
#endif				/* end of include guard: COLORS_H */
