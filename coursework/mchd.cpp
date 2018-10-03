#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>

void Run( const std::string& v, int tgt, int start ) {
    for( ; tgt >= 2 * start + 1; ++start )
        Run( v + ' ' + boost::lexical_cast<std::string>( start ), tgt - start, start + 1 );
    std::cout << v << ' ' << tgt << std::endl;
}

int main() {
    Run( std::string(), 10, 1 );
    getchar();
}