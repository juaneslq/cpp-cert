#include <exception>    //std::exception
#include <stdexcept>    //std::

/*                      Exception
 *                          |
 *          |---------------------------------|
 *      logic_error                     runtime_error
 *      |                               |
 *      |-> domain_error                |-> range_error
 *      |-> invalid_argument            |-> 
 *      |-> length_error                |-> 
 *      |-> out_of_range                |-> 
 * 
 * 
 * logic_error -> domain_error:
 *  It’s designed to represent all exceptions caused by the data exceeding the permissible range
 * 
 * logic_error -> invalid_argument:
 *  It’s designed to represent all exceptions caused by passing improper arguments to methods or functions or constructors.
 * 
 * logic_error -> length_error:
 *  It’s designed to represent all exceptions caused by using illegal values to specify size/length of data aggregates.
 * 
 * logic_error -> out_of_range:
 *  It’s designed to represent exceptions connected to the use of illegal indexes/keys while accessing numbered/keyed data collections.
 * 
 * 
 * 
 * runtime_error -> range_error
 *  It’s designed to represent exceptions caused by obtaining computation results ex
*/