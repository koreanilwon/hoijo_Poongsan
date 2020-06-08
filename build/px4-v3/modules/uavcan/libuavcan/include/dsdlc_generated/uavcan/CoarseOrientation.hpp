/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/pc/hoijo_Poongsan/modules/uavcan/dsdl/uavcan/CoarseOrientation.uavcan
 */

#ifndef UAVCAN_COARSEORIENTATION_HPP_INCLUDED
#define UAVCAN_COARSEORIENTATION_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Nested type.
# Coarse, low-resolution 3D orientation represented as fixed axes in 16 bit.
#
# Roll, pitch, yaw angles in radians should be multiplied by
# ANGLE_MULTIPLIER in order to convert them to the coarse representation.
#
# ANGLE_MULTIPLIER = NORM / PI
#
# Where NORM is 12, because it:
#  - Fits the maximum range of a signed 5 bit integer
#  - Allows to exactly represent the following angles:
#    0, 15, 30, 45, 60, 75, 90, 105, 120, 135, 150, 165, 180, and negatives
#

float32 ANGLE_MULTIPLIER = 4.7746482927568605

int5[3] fixed_axis_roll_pitch_yaw

bool orientation_defined    # False if the orientation is actually not defined
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.CoarseOrientation
saturated int5[3] fixed_axis_roll_pitch_yaw
saturated bool orientation_defined
******************************************************************************/

#undef fixed_axis_roll_pitch_yaw
#undef orientation_defined
#undef ANGLE_MULTIPLIER

namespace uavcan
{

template <int _tmpl>
struct UAVCAN_EXPORT CoarseOrientation_
{
    typedef const CoarseOrientation_<_tmpl>& ParameterType;
    typedef CoarseOrientation_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate > ANGLE_MULTIPLIER;
    };

    struct FieldTypes
    {
        typedef ::uavcan::Array< ::uavcan::IntegerSpec< 5, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeStatic, 3 > fixed_axis_roll_pitch_yaw;
        typedef ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > orientation_defined;
    };

    enum
    {
        MinBitLen
            = FieldTypes::fixed_axis_roll_pitch_yaw::MinBitLen
            + FieldTypes::orientation_defined::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::fixed_axis_roll_pitch_yaw::MaxBitLen
            + FieldTypes::orientation_defined::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::ANGLE_MULTIPLIER >::Type ANGLE_MULTIPLIER; // 4.7746482927568605

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::fixed_axis_roll_pitch_yaw >::Type fixed_axis_roll_pitch_yaw;
    typename ::uavcan::StorageType< typename FieldTypes::orientation_defined >::Type orientation_defined;

    CoarseOrientation_()
        : fixed_axis_roll_pitch_yaw()
        , orientation_defined()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<16 == MaxBitLen>::check();
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
    // This type has no default data type ID

    static const char* getDataTypeFullName()
    {
        return "uavcan.CoarseOrientation";
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
bool CoarseOrientation_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        fixed_axis_roll_pitch_yaw == rhs.fixed_axis_roll_pitch_yaw &&
        orientation_defined == rhs.orientation_defined;
}

template <int _tmpl>
bool CoarseOrientation_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(fixed_axis_roll_pitch_yaw, rhs.fixed_axis_roll_pitch_yaw) &&
        ::uavcan::areClose(orientation_defined, rhs.orientation_defined);
}

template <int _tmpl>
int CoarseOrientation_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::fixed_axis_roll_pitch_yaw::encode(self.fixed_axis_roll_pitch_yaw, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::orientation_defined::encode(self.orientation_defined, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int CoarseOrientation_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::fixed_axis_roll_pitch_yaw::decode(self.fixed_axis_roll_pitch_yaw, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::orientation_defined::decode(self.orientation_defined, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature CoarseOrientation_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x271BA10B0DAC9E52ULL);

    FieldTypes::fixed_axis_roll_pitch_yaw::extendDataTypeSignature(signature);
    FieldTypes::orientation_defined::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename CoarseOrientation_<_tmpl>::ConstantTypes::ANGLE_MULTIPLIER >::Type
    CoarseOrientation_<_tmpl>::ANGLE_MULTIPLIER = 4.7746482927568605; // 4.7746482927568605

/*
 * Final typedef
 */
typedef CoarseOrientation_<0> CoarseOrientation;

// No default registration

} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::CoarseOrientation >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::CoarseOrientation::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::CoarseOrientation >::stream(Stream& s, ::uavcan::CoarseOrientation::ParameterType obj, const int level)
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
    s << "fixed_axis_roll_pitch_yaw: ";
    YamlStreamer< ::uavcan::CoarseOrientation::FieldTypes::fixed_axis_roll_pitch_yaw >::stream(s, obj.fixed_axis_roll_pitch_yaw, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "orientation_defined: ";
    YamlStreamer< ::uavcan::CoarseOrientation::FieldTypes::orientation_defined >::stream(s, obj.orientation_defined, level + 1);
}

}

namespace uavcan
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::CoarseOrientation::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::CoarseOrientation >::stream(s, obj, 0);
    return s;
}

} // Namespace uavcan

#endif // UAVCAN_COARSEORIENTATION_HPP_INCLUDED