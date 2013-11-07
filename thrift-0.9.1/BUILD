cc_library(
    name = "libthrift",
    defs = [
        "HAVE_CONFIG_H",
        "USE_BOOST_THREAD=1"
    ],
    incs = [
        "lib/cpp/src",
    ],
    warning = "no",
    srcs = [
        'lib/cpp/src/thrift/Thrift.cpp',
        'lib/cpp/src/thrift/TApplicationException.cpp',
        'lib/cpp/src/thrift/VirtualProfiling.cpp',
        'lib/cpp/src/thrift/concurrency/ThreadManager.cpp',
        'lib/cpp/src/thrift/concurrency/TimerManager.cpp',
        'lib/cpp/src/thrift/concurrency/Util.cpp',
        'lib/cpp/src/thrift/protocol/TDebugProtocol.cpp',
        'lib/cpp/src/thrift/protocol/TDenseProtocol.cpp',
        'lib/cpp/src/thrift/protocol/TJSONProtocol.cpp',
        'lib/cpp/src/thrift/protocol/TBase64Utils.cpp',
        'lib/cpp/src/thrift/protocol/TMultiplexedProtocol.cpp',
        'lib/cpp/src/thrift/transport/TTransportException.cpp',
        'lib/cpp/src/thrift/transport/TFDTransport.cpp',
        'lib/cpp/src/thrift/transport/TFileTransport.cpp',
        'lib/cpp/src/thrift/transport/TSimpleFileTransport.cpp',
        'lib/cpp/src/thrift/transport/THttpTransport.cpp',
        'lib/cpp/src/thrift/transport/THttpClient.cpp',
        'lib/cpp/src/thrift/transport/THttpServer.cpp',
        'lib/cpp/src/thrift/transport/TSocket.cpp',
        'lib/cpp/src/thrift/transport/TPipe.cpp',
        'lib/cpp/src/thrift/transport/TPipeServer.cpp',
        'lib/cpp/src/thrift/transport/TSSLSocket.cpp',
        'lib/cpp/src/thrift/transport/TSocketPool.cpp',
        'lib/cpp/src/thrift/transport/TServerSocket.cpp',
        'lib/cpp/src/thrift/transport/TSSLServerSocket.cpp',
        'lib/cpp/src/thrift/transport/TTransportUtils.cpp',
        'lib/cpp/src/thrift/transport/TBufferTransports.cpp',
        'lib/cpp/src/thrift/server/TServer.cpp',
        'lib/cpp/src/thrift/server/TSimpleServer.cpp',
        'lib/cpp/src/thrift/server/TThreadPoolServer.cpp',
        'lib/cpp/src/thrift/server/TThreadedServer.cpp',
        'lib/cpp/src/thrift/async/TAsyncChannel.cpp',
        'lib/cpp/src/thrift/processor/PeekProcessor.cpp',
        'lib/cpp/src/thrift/concurrency/BoostThreadFactory.cpp',
        'lib/cpp/src/thrift/concurrency/BoostMonitor.cpp',
        'lib/cpp/src/thrift/concurrency/BoostMutex.cpp',
    ],
    deps = [
        "//thirdparty/snappy:snappy",
        "//thirdparty/boost:thread",
        "//thirdparty/openssl:openssl",
    ],
)

cc_library(
    name = "libthriftnb",
    defs = [
        "HAVE_CONFIG_H",
        "USE_BOOST_THREAD=1"
    ],
    incs = [
        "lib/cpp/src",
    ],
    srcs = [
        'lib/cpp/src/thrift/server/TNonblockingServer.cpp',
        'lib/cpp/src/thrift/async/TAsyncProtocolProcessor.cpp',
        'lib/cpp/src/thrift/async/TEvhttpServer.cpp',
        'lib/cpp/src/thrift/async/TEvhttpClientChannel.cpp',
    ],
    deps = [
        "//thirdparty/libevent:libevent",
        ':libthrift',
    ]
)

cc_library(
    name = "libthriftz",
    defs = [
        "HAVE_CONFIG_H",
        "USE_BOOST_THREAD=1"
    ],
    incs = [
        "lib/cpp/src",
    ],
    srcs = [
        'lib/cpp/src/thrift/transport/TZlibTransport.cpp',
    ],
    deps = [
        ':libthrift',
        '//thirdparty/zlib:zlib',
    ]
)
