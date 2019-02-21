//
// Copyright Aliaksei Levin (levlam@telegram.org), Arseny Smirnov (arseny30@gmail.com) 2014-2019
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#pragma once

#include "td/telegram/SendCodeHelper.h"

#include "td/utils/tl_helpers.h"

namespace td {

template <class T>
void SendCodeHelper::AuthenticationCodeInfo::store(T &storer) const {
  using td::store;
  store(type, storer);
  store(length, storer);
  store(pattern, storer);
}

template <class T>
void SendCodeHelper::AuthenticationCodeInfo::parse(T &parser) {
  using td::parse;
  parse(type, parser);
  parse(length, parser);
  parse(pattern, parser);
}

template <class T>
void SendCodeHelper::store(T &storer) const {
  using td::store;
  store(phone_number_, storer);
  store(phone_registered_, storer);
  store(phone_code_hash_, storer);
  store(sent_code_info_, storer);
  store(next_code_info_, storer);
  store(next_code_timestamp_, storer);
}

template <class T>
void SendCodeHelper::parse(T &parser) {
  using td::parse;
  parse(phone_number_, parser);
  parse(phone_registered_, parser);
  parse(phone_code_hash_, parser);
  parse(sent_code_info_, parser);
  parse(next_code_info_, parser);
  parse(next_code_timestamp_, parser);
}

}  // namespace td