//
//  main.cpp
//  TripSLang
//
//  Created by Livecode on 9/28/17.
//  Copyright © 2017 alexbrisan. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "interpreter.hpp"
#include "options.hpp"

int main()
{
    std::shared_ptr<repl_options> options(new repl_options);
        
    options->parse_file("/Users/livecode/Desktop/TripSLang/TripSLang/options.config");
    main_loop(options);
}
