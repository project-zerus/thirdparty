cc_library(name = 'snappy',
     srcs = [
        'snappy.cc',
        'snappy-c.cc',
        'snappy-sinksource.cc',
        'snappy-stubs-internal.cc'
    ],
    warning = 'no',
)

cc_binary(name = 'snappy_unittest',
     srcs = [
        'snappy_unittest.cc',
        'snappy-test.cc',
    ],
    deps = [
        ':snappy',
        '//thirdparty/zlib:zlib',
    ],
    warning = 'no',
)
