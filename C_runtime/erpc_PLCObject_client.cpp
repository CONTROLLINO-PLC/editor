/*
 * Generated by erpcgen 1.12.0 on Mon May 20 17:54:19 2024.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if ERPC_ALLOCATION_POLICY == ERPC_ALLOCATION_POLICY_DYNAMIC
#include "erpc_port.h"
#endif
#include "erpc_codec.hpp"
#include "erpc_PLCObject_client.hpp"
#include "erpc_manually_constructed.hpp"

#if 11200 != ERPC_VERSION_NUMBER
#error "The generated shim code version is different to the rest of eRPC code."
#endif

using namespace erpc;
using namespace std;
using namespace erpcShim;

//! @brief Function to write struct binary_t
static void write_binary_t_struct(erpc::Codec * codec, const binary_t * data);

//! @brief Function to write struct extra_file
static void write_extra_file_struct(erpc::Codec * codec, const extra_file * data);

//! @brief Function to write struct list_extra_file_1_t
static void write_list_extra_file_1_t_struct(erpc::Codec * codec, const list_extra_file_1_t * data);

//! @brief Function to write struct trace_order
static void write_trace_order_struct(erpc::Codec * codec, const trace_order * data);

//! @brief Function to write struct list_trace_order_1_t
static void write_list_trace_order_1_t_struct(erpc::Codec * codec, const list_trace_order_1_t * data);


// Write struct binary_t function implementation
static void write_binary_t_struct(erpc::Codec * codec, const binary_t * data)
{
    if(NULL == data)
    {
        return;
    }

    codec->writeBinary(data->dataLength, data->data);
}

// Write struct extra_file function implementation
static void write_extra_file_struct(erpc::Codec * codec, const extra_file * data)
{
    if(NULL == data)
    {
        return;
    }

    {
        uint32_t fname_len = strlen((const char*)data->fname);

        codec->writeString(fname_len, (const char*)data->fname);
    }

    write_binary_t_struct(codec, &(data->blobID));
}

// Write struct list_extra_file_1_t function implementation
static void write_list_extra_file_1_t_struct(erpc::Codec * codec, const list_extra_file_1_t * data)
{
    if(NULL == data)
    {
        return;
    }

    codec->startWriteList(data->elementsCount);
    for (uint32_t listCount = 0U; listCount < data->elementsCount; ++listCount)
    {
        write_extra_file_struct(codec, &(data->elements[listCount]));
    }
}

// Write struct trace_order function implementation
static void write_trace_order_struct(erpc::Codec * codec, const trace_order * data)
{
    if(NULL == data)
    {
        return;
    }

    codec->write(data->idx);

    write_binary_t_struct(codec, &(data->force));
}

// Write struct list_trace_order_1_t function implementation
static void write_list_trace_order_1_t_struct(erpc::Codec * codec, const list_trace_order_1_t * data)
{
    if(NULL == data)
    {
        return;
    }

    codec->startWriteList(data->elementsCount);
    for (uint32_t listCount = 0U; listCount < data->elementsCount; ++listCount)
    {
        write_trace_order_struct(codec, &(data->elements[listCount]));
    }
}


//! @brief Function to read struct binary_t
static void read_binary_t_struct(erpc::Codec * codec, binary_t * data);

//! @brief Function to read struct log_message
static void read_log_message_struct(erpc::Codec * codec, log_message * data);

//! @brief Function to read struct PSKID
static void read_PSKID_struct(erpc::Codec * codec, PSKID * data);

//! @brief Function to read struct PLCstatus
static void read_PLCstatus_struct(erpc::Codec * codec, PLCstatus * data);

//! @brief Function to read struct trace_sample
static void read_trace_sample_struct(erpc::Codec * codec, trace_sample * data);

//! @brief Function to read struct TraceVariables
static void read_TraceVariables_struct(erpc::Codec * codec, TraceVariables * data);

//! @brief Function to read struct list_trace_sample_1_t
static void read_list_trace_sample_1_t_struct(erpc::Codec * codec, list_trace_sample_1_t * data);


// Read struct binary_t function implementation
static void read_binary_t_struct(erpc::Codec * codec, binary_t * data)
{
    if(NULL == data)
    {
        return;
    }

    uint8_t * data_local;
    codec->readBinary(data->dataLength, &data_local);
    if (data->dataLength > 0)
    {
    data->data = (uint8_t *) erpc_malloc(data->dataLength * sizeof(uint8_t));
        if (data->data == NULL)
        {
            codec->updateStatus(kErpcStatus_MemoryError);
        }
        else
        {
            memcpy(data->data, data_local, data->dataLength);
        }
    }
    else
    {
        data->data = NULL;
    }
}

// Read struct log_message function implementation
static void read_log_message_struct(erpc::Codec * codec, log_message * data)
{
    if(NULL == data)
    {
        return;
    }

    {
        uint32_t msg_len;
        char * msg_local;
        codec->readString(msg_len, &msg_local);
        data->msg = (char*) erpc_malloc((msg_len + 1) * sizeof(char));
        if ((data->msg == NULL) || (msg_local == NULL))
        {
            codec->updateStatus(kErpcStatus_MemoryError);
        }
        else
        {
            memcpy(data->msg, msg_local, msg_len);
            (data->msg)[msg_len] = 0;
        }
    }

    codec->read(data->tick);

    codec->read(data->sec);

    codec->read(data->nsec);
}

// Read struct PSKID function implementation
static void read_PSKID_struct(erpc::Codec * codec, PSKID * data)
{
    if(NULL == data)
    {
        return;
    }

    {
        uint32_t ID_len;
        char * ID_local;
        codec->readString(ID_len, &ID_local);
        data->ID = (char*) erpc_malloc((ID_len + 1) * sizeof(char));
        if ((data->ID == NULL) || (ID_local == NULL))
        {
            codec->updateStatus(kErpcStatus_MemoryError);
        }
        else
        {
            memcpy(data->ID, ID_local, ID_len);
            (data->ID)[ID_len] = 0;
        }
    }

    {
        uint32_t PSK_len;
        char * PSK_local;
        codec->readString(PSK_len, &PSK_local);
        data->PSK = (char*) erpc_malloc((PSK_len + 1) * sizeof(char));
        if ((data->PSK == NULL) || (PSK_local == NULL))
        {
            codec->updateStatus(kErpcStatus_MemoryError);
        }
        else
        {
            memcpy(data->PSK, PSK_local, PSK_len);
            (data->PSK)[PSK_len] = 0;
        }
    }
}

// Read struct PLCstatus function implementation
static void read_PLCstatus_struct(erpc::Codec * codec, PLCstatus * data)
{
    int32_t _tmp_local_i32;

    if(NULL == data)
    {
        return;
    }

    codec->read(_tmp_local_i32);
    data->PLCstatus = static_cast<PLCstatus_enum>(_tmp_local_i32);

    for (uint32_t arrayCount0 = 0U; arrayCount0 < 4U; ++arrayCount0)
    {
        codec->read(data->logcounts[arrayCount0]);
    }
}

// Read struct trace_sample function implementation
static void read_trace_sample_struct(erpc::Codec * codec, trace_sample * data)
{
    if(NULL == data)
    {
        return;
    }

    codec->read(data->tick);

    read_binary_t_struct(codec, &(data->TraceBuffer));
}

// Read struct TraceVariables function implementation
static void read_TraceVariables_struct(erpc::Codec * codec, TraceVariables * data)
{
    int32_t _tmp_local_i32;

    if(NULL == data)
    {
        return;
    }

    codec->read(_tmp_local_i32);
    data->PLCstatus = static_cast<PLCstatus_enum>(_tmp_local_i32);

    read_list_trace_sample_1_t_struct(codec, &(data->traces));
}

// Read struct list_trace_sample_1_t function implementation
static void read_list_trace_sample_1_t_struct(erpc::Codec * codec, list_trace_sample_1_t * data)
{
    if(NULL == data)
    {
        return;
    }

    codec->startReadList(data->elementsCount);
    data->elements = (trace_sample *) erpc_malloc(data->elementsCount * sizeof(trace_sample));
    if ((data->elements == NULL) && (data->elementsCount > 0))
    {
        codec->updateStatus(kErpcStatus_MemoryError);
    }
    for (uint32_t listCount = 0U; listCount < data->elementsCount; ++listCount)
    {
        read_trace_sample_struct(codec, &(data->elements[listCount]));
    }
}




BeremizPLCObjectService_client::BeremizPLCObjectService_client(ClientManager *manager)
:m_clientManager(manager)
{
}

BeremizPLCObjectService_client::~BeremizPLCObjectService_client()
{
}

// BeremizPLCObjectService interface AppendChunkToBlob function client shim.
uint32_t BeremizPLCObjectService_client::AppendChunkToBlob(const binary_t * data, const binary_t * blobID, binary_t * newBlobID)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_AppendChunkToBlobId, request.getSequence());

        write_binary_t_struct(codec, data);

        write_binary_t_struct(codec, blobID);

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        read_binary_t_struct(codec, newBlobID);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_AppendChunkToBlobId);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}

// BeremizPLCObjectService interface GetLogMessage function client shim.
uint32_t BeremizPLCObjectService_client::GetLogMessage(uint8_t level, uint32_t msgID, log_message * message)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_GetLogMessageId, request.getSequence());

        codec->write(level);

        codec->write(msgID);

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        read_log_message_struct(codec, message);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_GetLogMessageId);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}

// BeremizPLCObjectService interface GetPLCID function client shim.
uint32_t BeremizPLCObjectService_client::GetPLCID(PSKID * plcID)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_GetPLCIDId, request.getSequence());

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        read_PSKID_struct(codec, plcID);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_GetPLCIDId);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}

// BeremizPLCObjectService interface GetPLCstatus function client shim.
uint32_t BeremizPLCObjectService_client::GetPLCstatus(PLCstatus * status)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_GetPLCstatusId, request.getSequence());

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        read_PLCstatus_struct(codec, status);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_GetPLCstatusId);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}

// BeremizPLCObjectService interface GetTraceVariables function client shim.
uint32_t BeremizPLCObjectService_client::GetTraceVariables(uint32_t debugToken, TraceVariables * traces)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_GetTraceVariablesId, request.getSequence());

        codec->write(debugToken);

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        read_TraceVariables_struct(codec, traces);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_GetTraceVariablesId);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}

// BeremizPLCObjectService interface MatchMD5 function client shim.
uint32_t BeremizPLCObjectService_client::MatchMD5(const char * MD5, bool * match)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_MatchMD5Id, request.getSequence());

        {
            uint32_t MD5_len = strlen((const char*)MD5);

            codec->writeString(MD5_len, (const char*)MD5);
        }

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        codec->read(*match);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_MatchMD5Id);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}

// BeremizPLCObjectService interface NewPLC function client shim.
uint32_t BeremizPLCObjectService_client::NewPLC(const char * md5sum, const binary_t * plcObjectBlobID, const list_extra_file_1_t * extrafiles, bool * success)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_NewPLCId, request.getSequence());

        {
            uint32_t md5sum_len = strlen((const char*)md5sum);

            codec->writeString(md5sum_len, (const char*)md5sum);
        }

        write_binary_t_struct(codec, plcObjectBlobID);

        write_list_extra_file_1_t_struct(codec, extrafiles);

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        codec->read(*success);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_NewPLCId);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}

// BeremizPLCObjectService interface PurgeBlobs function client shim.
uint32_t BeremizPLCObjectService_client::PurgeBlobs(void)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_PurgeBlobsId, request.getSequence());

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_PurgeBlobsId);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}

// BeremizPLCObjectService interface RepairPLC function client shim.
uint32_t BeremizPLCObjectService_client::RepairPLC(void)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_RepairPLCId, request.getSequence());

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_RepairPLCId);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}

// BeremizPLCObjectService interface ResetLogCount function client shim.
uint32_t BeremizPLCObjectService_client::ResetLogCount(void)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_ResetLogCountId, request.getSequence());

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_ResetLogCountId);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}

// BeremizPLCObjectService interface SeedBlob function client shim.
uint32_t BeremizPLCObjectService_client::SeedBlob(const binary_t * seed, binary_t * blobID)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_SeedBlobId, request.getSequence());

        write_binary_t_struct(codec, seed);

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        read_binary_t_struct(codec, blobID);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_SeedBlobId);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}

// BeremizPLCObjectService interface SetTraceVariablesList function client shim.
uint32_t BeremizPLCObjectService_client::SetTraceVariablesList(const list_trace_order_1_t * orders, int32_t * debugtoken)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_SetTraceVariablesListId, request.getSequence());

        write_list_trace_order_1_t_struct(codec, orders);

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        codec->read(*debugtoken);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_SetTraceVariablesListId);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}

// BeremizPLCObjectService interface StartPLC function client shim.
uint32_t BeremizPLCObjectService_client::StartPLC(void)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_StartPLCId, request.getSequence());

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_StartPLCId);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}

// BeremizPLCObjectService interface StopPLC function client shim.
uint32_t BeremizPLCObjectService_client::StopPLC(bool * success)
{
    erpc_status_t err = kErpcStatus_Success;

    uint32_t result;

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb preCB = m_clientManager->getPreCB();
    if (preCB)
    {
        preCB();
    }
#endif

    // Get a new request.
    RequestContext request = m_clientManager->createRequest(false);

    // Encode the request.
    Codec * codec = request.getCodec();

    if (codec == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    else
    {
        codec->startWriteMessage(message_type_t::kInvocationMessage, m_serviceId, m_StopPLCId, request.getSequence());

        // Send message to server
        // Codec status is checked inside this function.
        m_clientManager->performRequest(request);

        codec->read(*success);

        codec->read(result);

        err = codec->getStatus();
    }

    // Dispose of the request.
    m_clientManager->releaseRequest(request);

    // Invoke error handler callback function
    m_clientManager->callErrorHandler(err, m_StopPLCId);

#if ERPC_PRE_POST_ACTION
    pre_post_action_cb postCB = m_clientManager->getPostCB();
    if (postCB)
    {
        postCB();
    }
#endif


    if (err != kErpcStatus_Success)
    {
        result = 0xFFFFFFFFU;
    }

    return result;
}