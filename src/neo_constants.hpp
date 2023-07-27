// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#pragma once

namespace hal::neo {

using namespace std::literals;

    constexpr auto start_of_line = "$GPGGA,"sv;
    constexpr auto end_of_line = "\r\n"sv;
    constexpr auto comma_delimiter = ","sv;
    const char* GPGGA_FORMAT = ",%f,%f,%c,%f,%c,%d,%d,%f,%f,%c,%f,%c,,%s,";
    const char* GPGLL_FORMAT = "..."; // Fill with appropriate format
    const char* GPGSA_FORMAT = "..."; // Fill with appropriate format
    const char* GPGSV_FORMAT = "..."; // Fill with appropriate format
    const char* GPRMC_FORMAT = "..."; // Fill with appropriate format
    const char* GPVTG_FORMAT = "..."; // Fill with appropriate format
    const char* GPZDA_FORMAT = "..."; // Fill with appropriate format


}  // namespace hal::neo