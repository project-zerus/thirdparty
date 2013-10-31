cc_library(
    name = 'double-conversion',
    warning = 'No',
    incs = [
        'src'
    ],
    srcs = [
        'src/bignum.cc',
        'src/bignum-dtoa.cc',
        'src/cached-powers.cc',
        'src/diy-fp.cc',
        'src/double-conversion.cc',
        'src/fast-dtoa.cc',
        'src/fixed-dtoa.cc',
        'src/strtod.cc'
    ]
)

cc_test(
    name = 'double-converstion-test',
    incs = [
        'src',
        'test/cctest'
    ],
    srcs = [
        'test/cctest/cctest.cc',
        'test/cctest/gay-fixed.cc',
        'test/cctest/gay-precision.cc',
        'test/cctest/gay-shortest.cc',
        'test/cctest/gay-shortest-single.cc',
        'test/cctest/test-bignum.cc',
        'test/cctest/test-bignum-dtoa.cc',
        'test/cctest/test-conversions.cc',
        'test/cctest/test-diy-fp.cc',
        'test/cctest/test-dtoa.cc',
        'test/cctest/test-fast-dtoa.cc',
        'test/cctest/test-fixed-dtoa.cc',
        'test/cctest/test-ieee.cc',
        'test/cctest/test-strtod.cc'
    ],
    deps = [
        ':double-conversion'
    ]
)
