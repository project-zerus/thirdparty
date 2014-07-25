cc_library(
  name = 'cpp-netlib',
  warning = 'no',
  srcs = [
    "libs/network/src/client.cpp",
    "libs/network/src/server_request_parsers_impl.cpp",
    "libs/network/src/uri/schemes.cpp",
    "libs/network/src/uri/uri.cpp",
  ],
  export_incs = [
    '.',
  ],
  deps = "//boost:thread"
)
