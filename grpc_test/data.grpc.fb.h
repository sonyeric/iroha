// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: data
#ifndef GRPC_data__INCLUDED
#define GRPC_data__INCLUDED

#include "data_generated.h"
#include "flatbuffers/grpc.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace CppFlatBufGrpc {
namespace Sample {

class DataStorage GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Store(::grpc::ClientContext* context, const flatbuffers::BufferRef<Data>& request, flatbuffers::BufferRef<Stat>* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::BufferRef<Stat>>> AsyncStore(::grpc::ClientContext* context, const flatbuffers::BufferRef<Data>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::BufferRef<Stat>>>(AsyncStoreRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< flatbuffers::BufferRef<Data>>> Retrieve(::grpc::ClientContext* context, const flatbuffers::BufferRef<Stat>& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< flatbuffers::BufferRef<Data>>>(RetrieveRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::BufferRef<Data>>> AsyncRetrieve(::grpc::ClientContext* context, const flatbuffers::BufferRef<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::BufferRef<Data>>>(AsyncRetrieveRaw(context, request, cq, tag));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::BufferRef<Stat>>* AsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<Data>& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< flatbuffers::BufferRef<Data>>* RetrieveRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<Stat>& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< flatbuffers::BufferRef<Data>>* AsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Store(::grpc::ClientContext* context, const flatbuffers::BufferRef<Data>& request, flatbuffers::BufferRef<Stat>* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<Stat>>> AsyncStore(::grpc::ClientContext* context, const flatbuffers::BufferRef<Data>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<Stat>>>(AsyncStoreRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< flatbuffers::BufferRef<Data>>> Retrieve(::grpc::ClientContext* context, const flatbuffers::BufferRef<Stat>& request) {
      return std::unique_ptr< ::grpc::ClientReader< flatbuffers::BufferRef<Data>>>(RetrieveRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::BufferRef<Data>>> AsyncRetrieve(::grpc::ClientContext* context, const flatbuffers::BufferRef<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::BufferRef<Data>>>(AsyncRetrieveRaw(context, request, cq, tag));
    }
  
   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<Stat>>* AsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<Data>& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientReader< flatbuffers::BufferRef<Data>>* RetrieveRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<Stat>& request) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReader< flatbuffers::BufferRef<Data>>* AsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_Store_;
    const ::grpc::RpcMethod rpcmethod_Retrieve_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
  
  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Store(::grpc::ServerContext* context, const flatbuffers::BufferRef<Data>* request, flatbuffers::BufferRef<Stat>* response);
    virtual ::grpc::Status Retrieve(::grpc::ServerContext* context, const flatbuffers::BufferRef<Stat>* request, ::grpc::ServerWriter< flatbuffers::BufferRef<Data>>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_Store : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Store() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Store() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Store(::grpc::ServerContext* context, const flatbuffers::BufferRef<Data>* request, flatbuffers::BufferRef<Stat>* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStore(::grpc::ServerContext* context, flatbuffers::BufferRef<Data>* request, ::grpc::ServerAsyncResponseWriter< flatbuffers::BufferRef<Stat>>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Retrieve : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Retrieve() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Retrieve() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Retrieve(::grpc::ServerContext* context, const flatbuffers::BufferRef<Stat>* request, ::grpc::ServerWriter< flatbuffers::BufferRef<Data>>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRetrieve(::grpc::ServerContext* context, flatbuffers::BufferRef<Stat>* request, ::grpc::ServerAsyncWriter< flatbuffers::BufferRef<Data>>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef   WithAsyncMethod_Store<  WithAsyncMethod_Retrieve<  Service   >   >   AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Store : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Store() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Store() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Store(::grpc::ServerContext* context, const flatbuffers::BufferRef<Data>* request, flatbuffers::BufferRef<Stat>* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Retrieve : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Retrieve() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Retrieve() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Retrieve(::grpc::ServerContext* context, const flatbuffers::BufferRef<Stat>* request, ::grpc::ServerWriter< flatbuffers::BufferRef<Data>>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace Sample
}  // namespace CppFlatBufGrpc


#endif  // GRPC_data__INCLUDED
