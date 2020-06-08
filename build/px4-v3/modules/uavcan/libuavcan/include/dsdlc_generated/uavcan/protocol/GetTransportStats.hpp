/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/pc/hoijo_Poongsan/modules/uavcan/dsdl/uavcan/protocol/4.GetTransportStats.uavcan
 */

#ifndef UAVCAN_PROTOCOL_GETTRANSPORTSTATS_HPP_INCLUDED
#define UAVCAN_PROTOCOL_GETTRANSPORTSTATS_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <uavcan/protocol/CANIfaceStats.hpp>

/******************************* Source text **********************************
#
# Get transport statistics.
#

---

#
# UAVCAN transport layer statistics.
#
uint48 transfers_tx             # Number of transmitted transfers.
uint48 transfers_rx             # Number of received transfers.
uint48 transfer_errors          # Number of errors detected in the UAVCAN transport layer.

#
# CAN bus statistics, for each interface independently.
#
CANIfaceStats[<=3] can_iface_stats
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.GetTransportStats
---
saturated uint48 transfers_tx
saturated uint48 transfers_rx
saturated uint48 transfer_errors
uavcan.protocol.CANIfaceStats[<=3] can_iface_stats
******************************************************************************/

#undef transfers_tx
#undef transfers_rx
#undef transfer_errors
#undef can_iface_stats

namespace uavcan
{
namespace protocol
{

struct UAVCAN_EXPORT GetTransportStats_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
        };

        enum
        {
            MinBitLen
        };

        enum
        {
            MaxBitLen
        };

        // Constants

        // Fields

        Request_()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<0 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 48, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > transfers_tx;
            typedef ::uavcan::IntegerSpec< 48, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > transfers_rx;
            typedef ::uavcan::IntegerSpec< 48, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > transfer_errors;
            typedef ::uavcan::Array< ::uavcan::protocol::CANIfaceStats, ::uavcan::ArrayModeDynamic, 3 > can_iface_stats;
        };

        enum
        {
            MinBitLen
                = FieldTypes::transfers_tx::MinBitLen
                + FieldTypes::transfers_rx::MinBitLen
                + FieldTypes::transfer_errors::MinBitLen
                + FieldTypes::can_iface_stats::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::transfers_tx::MaxBitLen
                + FieldTypes::transfers_rx::MaxBitLen
                + FieldTypes::transfer_errors::MaxBitLen
                + FieldTypes::can_iface_stats::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::transfers_tx >::Type transfers_tx;
        typename ::uavcan::StorageType< typename FieldTypes::transfers_rx >::Type transfers_rx;
        typename ::uavcan::StorageType< typename FieldTypes::transfer_errors >::Type transfer_errors;
        typename ::uavcan::StorageType< typename FieldTypes::can_iface_stats >::Type can_iface_stats;

        Response_()
            : transfers_tx()
            , transfers_rx()
            , transfer_errors()
            , can_iface_stats()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<578 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 4 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.GetTransportStats";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    GetTransportStats_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool GetTransportStats_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    (void)rhs;
    return true;
}

template <int _tmpl>
bool GetTransportStats_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    (void)rhs;
    return true;
}

template <int _tmpl>
int GetTransportStats_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    return res;
}

template <int _tmpl>
int GetTransportStats_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    return res;
}

template <int _tmpl>
bool GetTransportStats_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        transfers_tx == rhs.transfers_tx &&
        transfers_rx == rhs.transfers_rx &&
        transfer_errors == rhs.transfer_errors &&
        can_iface_stats == rhs.can_iface_stats;
}

template <int _tmpl>
bool GetTransportStats_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(transfers_tx, rhs.transfers_tx) &&
        ::uavcan::areClose(transfers_rx, rhs.transfers_rx) &&
        ::uavcan::areClose(transfer_errors, rhs.transfer_errors) &&
        ::uavcan::areClose(can_iface_stats, rhs.can_iface_stats);
}

template <int _tmpl>
int GetTransportStats_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::transfers_tx::encode(self.transfers_tx, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::transfers_rx::encode(self.transfers_rx, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::transfer_errors::encode(self.transfer_errors, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::can_iface_stats::encode(self.can_iface_stats, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int GetTransportStats_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::transfers_tx::decode(self.transfers_tx, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::transfers_rx::decode(self.transfers_rx, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::transfer_errors::decode(self.transfer_errors, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::can_iface_stats::decode(self.can_iface_stats, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature GetTransportStats_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x31C7F654531B61B3ULL);

    Response::FieldTypes::transfers_tx::extendDataTypeSignature(signature);
    Response::FieldTypes::transfers_rx::extendDataTypeSignature(signature);
    Response::FieldTypes::transfer_errors::extendDataTypeSignature(signature);
    Response::FieldTypes::can_iface_stats::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef GetTransportStats_ GetTransportStats;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::GetTransportStats > _uavcan_gdtr_registrator_GetTransportStats;

}

} // Namespace protocol
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::GetTransportStats::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::GetTransportStats::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::GetTransportStats::Request >::stream(Stream& s, ::uavcan::protocol::GetTransportStats::Request::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::GetTransportStats::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::GetTransportStats::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::GetTransportStats::Response >::stream(Stream& s, ::uavcan::protocol::GetTransportStats::Response::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "transfers_tx: ";
    YamlStreamer< ::uavcan::protocol::GetTransportStats::Response::FieldTypes::transfers_tx >::stream(s, obj.transfers_tx, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "transfers_rx: ";
    YamlStreamer< ::uavcan::protocol::GetTransportStats::Response::FieldTypes::transfers_rx >::stream(s, obj.transfers_rx, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "transfer_errors: ";
    YamlStreamer< ::uavcan::protocol::GetTransportStats::Response::FieldTypes::transfer_errors >::stream(s, obj.transfer_errors, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "can_iface_stats: ";
    YamlStreamer< ::uavcan::protocol::GetTransportStats::Response::FieldTypes::can_iface_stats >::stream(s, obj.can_iface_stats, level + 1);
}

}

namespace uavcan
{
namespace protocol
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::GetTransportStats::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::GetTransportStats::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::GetTransportStats::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::GetTransportStats::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace protocol
} // Namespace uavcan

#endif // UAVCAN_PROTOCOL_GETTRANSPORTSTATS_HPP_INCLUDED