#ifndef _MODULE_EXCEPTION_HPP_
#define _MODULE_EXCEPTION_HPP_

#include <stdexcept>

namespace wayenvan{

class ModuleException: public std::runtime_error
{
    private:
    const char* kErrorClassName_;

    public:
    ModuleException(const char* kErrorClassName="", const char* kMessage=""):
        std::runtime_error(kMessage),
        kErrorClassName_(kErrorClassName)
        {}

    ~ModuleException() {}
    const char* get_error_class(){
        return kErrorClassName_;
    } 
}; 

}
#endif