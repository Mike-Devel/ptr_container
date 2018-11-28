cmake_minimum_required(VERSION 3.5)
project(BoostPtr_container)

add_library(boost_ptr_container INTERFACE)
add_library(Boost::ptr_container ALIAS boost_ptr_container)

target_include_directories(boost_ptr_container INTERFACE include)

target_link_libraries(boost_ptr_container
	INTERFACE
		Boost::array
		Boost::assert
		Boost::circular_buffer
		Boost::config
		Boost::core
		Boost::iterator
		Boost::mpl
		Boost::range
		Boost::serialization
		Boost::smart_ptr
		Boost::static_assert
		Boost::type_traits
		Boost::unordered
		Boost::utility

)

