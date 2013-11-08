cc_library(
    name = 'kyotocabinet',
    warning = 'no',
    defs = [
        '_MYGCCATOMIC',
        '_MYZLIB',
        '_MYLZO',
    ],
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kccachedb.cc',
        'src/kccompare.cc',
        'src/kccompress.cc',
        'src/kcdb.cc',
        'src/kcdbext.cc',
        'src/kcdirdb.cc',
        'src/kcfile.cc',
        'src/kchashdb.cc',
        'src/kclangc.cc',
        'src/kcmap.cc',
        'src/kcplantdb.cc',
        'src/kcpolydb.cc',
        'src/kcprotodb.cc',
        'src/kcregex.cc',
        'src/kcstashdb.cc',
        'src/kctextdb.cc',
        'src/kcthread.cc',
        'src/kcutil.cc',
    ],
    deps = [
        '#pthread',
        '//thirdparty/lzo:lzo',
        '//thirdparty/zlib:zlib',
    ],
)

cc_binary(
    name = 'kcutiltest',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kcutiltest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcprototest',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kcprototest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcstashtest',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kcstashtest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kccachetest',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kccachetest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcgrasstest',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kcgrasstest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kchashtest',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kchashtest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kctreetest',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kctreetest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcdirtest',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kcdirtest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcforesttest',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kcforesttest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcpolytest',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kcpolytest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kclangctest',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kclangctest.c',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcutilmgr',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kcutilmgr.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kchashmgr',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kchashmgr.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kctreemgr',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kctreemgr.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcdirmgr',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kcdirmgr.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcforestmgr',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kcforestmgr.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcpolymgr',
    warning = 'no',
    incs = [
        'src',
        'thirdparty/zlib',
    ],
    srcs = [
        'src/kcpolymgr.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)
