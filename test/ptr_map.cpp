/**
 * Pointer-Container Library
 * (C) Thorsten Ottosen 2003-2004
 * 
 * Permission to copy, use, modify,
 * sell and distribute this software is granted provided this
 * copyright notice appears in all copies. This software is provided
 * "as is" without express or implied warranty, and with no claim as
 * to its suitability for any purpose.
 *
 * See http://www.boost.org/libs/ptr_container for documentation.
 *
 */
 
#include <libs/ptr_container/test/associative_test_data.hpp>
#include <libs/ptr_container/test/concept_check_data.hpp>
#include <boost/ptr_container/ptr_map.hpp>

int test_main( int, char*[] )
{
    typedef_test< ptr_map<int, Base>, Derived >();
    typedef_test< ptr_map<int, Value>, Value >();

    associative_container_test< ptr_map<int, Base>, Base, Derived >();
    associative_container_test< ptr_map<int, Value>, Value, Value >();
    
    typedef_test< ptr_multimap<int, Base>, Derived >();
    typedef_test< ptr_multimap<int, Value>, Value >();

    associative_container_test< ptr_multimap<int, Base>, Base, Derived >();
    associative_container_test< ptr_multimap<int, Value>, Value, Value >();
    
    //c.insert( T() );
    //c.insert( t );


    return 0;
}



