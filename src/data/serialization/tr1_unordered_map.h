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

#ifndef INCLUDE_GUARD_PFI_DATA_SERIALIZATION_TR1_UNORDERED_MAP_H_
#define INCLUDE_GUARD_PFI_DATA_SERIALIZATION_TR1_UNORDERED_MAP_H_

#include "base.h"

#include <tr1/unordered_map>

#include "pair.h"

namespace pfi{
namespace data{
namespace serialization{

template <class Archive, class K, class V, class H, class P, class A>
void serialize(Archive &ar, std::tr1::unordered_map<K, V, H, P, A> &m)
{
  uint32_t size=static_cast<uint32_t>(m.size());
  ar & size;

  if (ar.is_read){
    m.clear();
    while(size--){
      std::pair<K,V> v;
      ar & v;
      m.insert(v);
    }
  }
  else{
    for (typename std::tr1::unordered_map<K,V,H,P,A>::iterator p=m.begin();
         p!=m.end();p++){
      std::pair<K,V> v(*p);
      ar & v;
    }
  }
}

} // serialization
} // data
} // pfi
#endif // #ifndef INCLUDE_GUARD_PFI_DATA_SERIALIZATION_TR1_UNORDERED_MAP_H_
