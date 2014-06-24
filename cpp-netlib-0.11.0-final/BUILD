cc_library(
  name = 'cpp-netlib',
  warning = 'no',
  extra_cppflags = '-std=c++0x',
  srcs = [
    "libs/network/src/client.cpp",
    "libs/network/src/server_request_parsers_impl.cpp",
    "libs/network/src/uri/schemes.cpp",
    "libs/network/src/uri/uri.cpp",
  ],
  deps = "//thirdparty/boost:thread"
)
