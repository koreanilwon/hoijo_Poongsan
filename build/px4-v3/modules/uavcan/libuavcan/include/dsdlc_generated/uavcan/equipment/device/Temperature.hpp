/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/pc/hoijo_Poongsan/modules/uavcan/dsdl/uavcan/equipment/device/1110.Temperature.uavcan
 */

#ifndef UAVCAN_EQUIPMENT_DEVICE_TEMPERATURE_HPP_INCLUDED
#define UAVCAN_EQUIPMENT_DEVICE_TEMPERATURE_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Generic device temperature
#

uint16 device_id

float16 temperature                  # in kelvin

uint8 ERROR_FLAG_OVERHEATING = 1
uint8 ERROR_FLAG_OVERCOOLING = 2
uint8 error_flags
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.device.Temperature
saturated uint16 device_id
saturated float16 temperature
saturated uint8 error_flags
******************************************************************************/

#undef device_id
#undef temperature
#undef error_flags
#undef ERROR_FLAG_OVERHEATING
#undef ERROR_FLAG_OVERCOOLING

namespace uavcan
{
namespace equipment
{
namespace device
{

template <int _tmpl>
struct UAVCAN_EXPORT Temperature_
{
    typedef const Temperature_<_tmpl>& ParameterType;
    typedef Temperature_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ERROR_FLAG_OVERHEATING;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ERROR_FLAG_OVERCOOLING;
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > device_id;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > temperature;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > error_flags;
    };

    enum
    {
        MinBitLen
            = FieldTypes::device_id::MinBitLen
            + FieldTypes::temperature::MinBitLen
            + FieldTypes::error_flags::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::device_id::MaxBitLen
            + FieldTypes::temperature::MaxBitLen
            + FieldTypes::error_flags::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::ERROR_FLAG_OVERHEATING >::Type ERROR_FLAG_OVERHEATING; // 1
    static const typename ::uavcan::StorageType< typename ConstantTypes::ERROR_FLAG_OVERCOOLING >::Type ERROR_FLAG_OVERCOOLING; // 2

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::device_id >::Type device_id;
    typename ::uavcan::StorageType< typename FieldTypes::temperature >::Type temperature;
    typename ::uavcan::StorageType< typename FieldTypes::error_flags >::Type error_flags;

    Temperature_()
        : device_id()
        , temperature()
        , error_flags()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<40 == MaxBitLen>::check();
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

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 1110 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.device.Temperature";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Temperature_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        device_id == rhs.device_id &&
        temperature == rhs.temperature &&
        error_flags == rhs.error_flags;
}

template <int _tmpl>
bool Temperature_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(device_id, rhs.device_id) &&
        ::uavcan::areClose(temperature, rhs.temperature) &&
        ::uavcan::areClose(error_flags, rhs.error_flags);
}

template <int _tmpl>
int Temperature_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::device_id::encode(self.device_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::temperature::encode(self.temperature, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::error_flags::encode(self.error_flags, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Temperature_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::device_id::decode(self.device_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::temperature::decode(self.temperature, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::error_flags::decode(self.error_flags, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Temperature_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x70261C28A94144C6ULL);

    FieldTypes::device_id::extendDataTypeSignature(signature);
    FieldTypes::temperature::extendDataTypeSignature(signature);
    FieldTypes::error_flags::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename Temperature_<_tmpl>::ConstantTypes::ERROR_FLAG_OVERHEATING >::Type
    Temperature_<_tmpl>::ERROR_FLAG_OVERHEATING = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename Temperature_<_tmpl>::ConstantTypes::ERROR_FLAG_OVERCOOLING >::Type
    Temperature_<_tmpl>::ERROR_FLAG_OVERCOOLING = 2U; // 2

/*
 * Final typedef
 */
typedef Temperature_<0> Temperature;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::device::Temperature > _uavcan_gdtr_registrator_Temperature;

}

} // Namespace device
} // Namespace equipment
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::device::Temperature >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::device::Temperature::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::device::Temperature >::stream(Stream& s, ::uavcan::equipment::device::Temperature::ParameterType obj, const int level)
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
    s << "device_id: ";
    YamlStreamer< ::uavcan::equipment::device::Temperature::FieldTypes::device_id >::stream(s, obj.device_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "temperature: ";
    YamlStreamer< ::uavcan::equipment::device::Temperature::FieldTypes::temperature >::stream(s, obj.temperature, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "error_flags: ";
    YamlStreamer< ::uavcan::equipment::device::Temperature::FieldTypes::error_flags >::stream(s, obj.error_flags, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace device
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::device::Temperature::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::device::Temperature >::stream(s, obj, 0);
    return s;
}

} // Namespace device
} // Namespace equipment
} // Namespace uavcan

#endif // UAVCAN_EQUIPMENT_DEVICE_TEMPERATURE_HPP_INCLUDED