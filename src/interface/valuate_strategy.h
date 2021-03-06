// Copyright 2020 amigao. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Author: susu1970@yandex.com 
//

#ifndef AMIGAO_INTERFACE_VALUATE_STRATEGY_H_
#define AMIGAO_INTERFACE_VALUATE_STRATEGY_H_

#include<string>

namespace amigao{
  class DBOperationInterface;
  class ValuateStrategyInterface{
  public:
    virtual void handle(std::string url,
			std::string &title,
			std::string &contents,
			std::string &html,
			DBOperationInterface*db_op)=0;
    virtual ~ValuateStrategyInterface(){
    }
  };
}

#endif
