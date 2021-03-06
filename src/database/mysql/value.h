// Copyright (c)2008-2011, Preferred Infrastructure Inc.
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
// 
//     * Redistributions in binary form must reproduce the above
//       copyright notice, this list of conditions and the following
//       disclaimer in the documentation and/or other materials provided
//       with the distribution.
// 
//     * Neither the name of Preferred Infrastructure nor the names of other
//       contributors may be used to endorse or promote products derived
//       from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// See also FOSS License Exception.
// Link: http://www.mysql.com/about/legal/licensing/foss-exception/

#ifndef INCLUDE_GUARD_PFI_DATABASE_MYSQL_VALUE_H_
#define INCLUDE_GUARD_PFI_DATABASE_MYSQL_VALUE_H_

#include <mysql.h>

#include "../type.h"
#include "../../lang/shared_ptr.h"

namespace pfi{
namespace database{
namespace mysql{

size_t bind_length(const pfi::lang::shared_ptr<sql_value>& p);
pfi::lang::shared_ptr<sql_value> from_bind(MYSQL_BIND &bind);
void to_bind(const pfi::lang::shared_ptr<sql_value>& p, MYSQL_BIND &bind);

} // postgresql
} // database
} // pfi
#endif // #ifndef INCLUDE_GUARD_PFI_DATABASE_MYSQL_VALUE_H_
