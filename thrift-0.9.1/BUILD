cc_library(
    name = 'libthrift',
    defs = [
        'HAVE_CONFIG_H',
        'USE_BOOST_THREAD=1'
    ],
    incs = [
        'src/lib/cpp/src',
        'thirdparty/libevent',
    ],
    warning = 'no',
    srcs = [
        'src/lib/cpp/src/thrift/Thrift.cpp',
        'src/lib/cpp/src/thrift/TApplicationException.cpp',
        'src/lib/cpp/src/thrift/VirtualProfiling.cpp',
        'src/lib/cpp/src/thrift/concurrency/ThreadManager.cpp',
        'src/lib/cpp/src/thrift/concurrency/TimerManager.cpp',
        'src/lib/cpp/src/thrift/concurrency/Util.cpp',
        'src/lib/cpp/src/thrift/protocol/TDebugProtocol.cpp',
        'src/lib/cpp/src/thrift/protocol/TDenseProtocol.cpp',
        'src/lib/cpp/src/thrift/protocol/TJSONProtocol.cpp',
        'src/lib/cpp/src/thrift/protocol/TBase64Utils.cpp',
        'src/lib/cpp/src/thrift/protocol/TMultiplexedProtocol.cpp',
        'src/lib/cpp/src/thrift/transport/TTransportException.cpp',
        'src/lib/cpp/src/thrift/transport/TFDTransport.cpp',
        'src/lib/cpp/src/thrift/transport/TFileTransport.cpp',
        'src/lib/cpp/src/thrift/transport/TSimpleFileTransport.cpp',
        'src/lib/cpp/src/thrift/transport/THttpTransport.cpp',
        'src/lib/cpp/src/thrift/transport/THttpClient.cpp',
        'src/lib/cpp/src/thrift/transport/THttpServer.cpp',
        'src/lib/cpp/src/thrift/transport/TSocket.cpp',
        'src/lib/cpp/src/thrift/transport/TPipe.cpp',
        'src/lib/cpp/src/thrift/transport/TPipeServer.cpp',
        'src/lib/cpp/src/thrift/transport/TSSLSocket.cpp',
        'src/lib/cpp/src/thrift/transport/TSocketPool.cpp',
        'src/lib/cpp/src/thrift/transport/TServerSocket.cpp',
        'src/lib/cpp/src/thrift/transport/TSSLServerSocket.cpp',
        'src/lib/cpp/src/thrift/transport/TTransportUtils.cpp',
        'src/lib/cpp/src/thrift/transport/TBufferTransports.cpp',
        'src/lib/cpp/src/thrift/server/TServer.cpp',
        'src/lib/cpp/src/thrift/server/TSimpleServer.cpp',
        'src/lib/cpp/src/thrift/server/TThreadPoolServer.cpp',
        'src/lib/cpp/src/thrift/server/TThreadedServer.cpp',
        'src/lib/cpp/src/thrift/async/TAsyncChannel.cpp',
        'src/lib/cpp/src/thrift/processor/PeekProcessor.cpp',
        'src/lib/cpp/src/thrift/concurrency/BoostThreadFactory.cpp',
        'src/lib/cpp/src/thrift/concurrency/BoostMonitor.cpp',
        'src/lib/cpp/src/thrift/concurrency/BoostMutex.cpp',
    ],
    deps = [
        '//thirdparty/snappy:snappy',
        '//thirdparty/boost:thread',
        '//thirdparty/openssl:openssl',
    ],
)

cc_library(
    name = 'libthriftnb',
    defs = [
        'HAVE_CONFIG_H',
        'USE_BOOST_THREAD=1'
    ],
    incs = [
        'src/lib/cpp/src',
        'thirdparty/libevent',
    ],
    srcs = [
        'src/lib/cpp/src/thrift/server/TNonblockingServer.cpp',
        'src/lib/cpp/src/thrift/async/TAsyncProtocolProcessor.cpp',
        'src/lib/cpp/src/thrift/async/TEvhttpServer.cpp',
        'src/lib/cpp/src/thrift/async/TEvhttpClientChannel.cpp',
    ],
    deps = [
        '//thirdparty/libevent:libevent',
        ':libthrift',
    ]
)

cc_library(
    name = 'libthriftz',
    defs = [
        'HAVE_CONFIG_H',
        'USE_BOOST_THREAD=1',
    ],
    incs = [
        'src/lib/cpp/src',
        'thirdparty/libevent',
    ],
    srcs = [
        'src/lib/cpp/src/thrift/transport/TZlibTransport.cpp',
    ],
    deps = [
        ':libthrift',
        '//thirdparty/zlib:zlib',
    ]
)
