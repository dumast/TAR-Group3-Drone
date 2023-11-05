// Generated by gencpp from file gazebo_msgs/GetJointPropertiesResponse.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_GETJOINTPROPERTIESRESPONSE_H
#define GAZEBO_MSGS_MESSAGE_GETJOINTPROPERTIESRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_msgs
{
template <class ContainerAllocator>
struct GetJointPropertiesResponse_
{
  typedef GetJointPropertiesResponse_<ContainerAllocator> Type;

  GetJointPropertiesResponse_()
    : type(0)
    , damping()
    , position()
    , rate()
    , success(false)
    , status_message()  {
    }
  GetJointPropertiesResponse_(const ContainerAllocator& _alloc)
    : type(0)
    , damping(_alloc)
    , position(_alloc)
    , rate(_alloc)
    , success(false)
    , status_message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _type_type;
  _type_type type;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _damping_type;
  _damping_type damping;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _position_type;
  _position_type position;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _rate_type;
  _rate_type rate;

   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _status_message_type;
  _status_message_type status_message;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(REVOLUTE)
  #undef REVOLUTE
#endif
#if defined(_WIN32) && defined(CONTINUOUS)
  #undef CONTINUOUS
#endif
#if defined(_WIN32) && defined(PRISMATIC)
  #undef PRISMATIC
#endif
#if defined(_WIN32) && defined(FIXED)
  #undef FIXED
#endif
#if defined(_WIN32) && defined(BALL)
  #undef BALL
#endif
#if defined(_WIN32) && defined(UNIVERSAL)
  #undef UNIVERSAL
#endif

  enum {
    REVOLUTE = 0u,
    CONTINUOUS = 1u,
    PRISMATIC = 2u,
    FIXED = 3u,
    BALL = 4u,
    UNIVERSAL = 5u,
  };


  typedef boost::shared_ptr< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetJointPropertiesResponse_

typedef ::gazebo_msgs::GetJointPropertiesResponse_<std::allocator<void> > GetJointPropertiesResponse;

typedef boost::shared_ptr< ::gazebo_msgs::GetJointPropertiesResponse > GetJointPropertiesResponsePtr;
typedef boost::shared_ptr< ::gazebo_msgs::GetJointPropertiesResponse const> GetJointPropertiesResponseConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator1> & lhs, const ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type &&
    lhs.damping == rhs.damping &&
    lhs.position == rhs.position &&
    lhs.rate == rhs.rate &&
    lhs.success == rhs.success &&
    lhs.status_message == rhs.status_message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator1> & lhs, const ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cd7b30a39faa372283dc94c5f6457f82";
  }

  static const char* value(const ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcd7b30a39faa3722ULL;
  static const uint64_t static_value2 = 0x83dc94c5f6457f82ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/GetJointPropertiesResponse";
  }

  static const char* value(const ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# joint type\n"
"uint8 type\n"
"uint8 REVOLUTE    = 0                # single DOF\n"
"uint8 CONTINUOUS  = 1                # single DOF (revolute w/o joints)\n"
"uint8 PRISMATIC   = 2                # single DOF\n"
"uint8 FIXED       = 3                # 0 DOF\n"
"uint8 BALL        = 4                # 3 DOF\n"
"uint8 UNIVERSAL   = 5                # 2 DOF\n"
"# dynamics properties\n"
"float64[] damping\n"
"# joint state\n"
"float64[] position\n"
"float64[] rate\n"
"# service return status\n"
"bool success                         # return true if get successful\n"
"string status_message                # comments if available\n"
"\n"
;
  }

  static const char* value(const ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.damping);
      stream.next(m.position);
      stream.next(m.rate);
      stream.next(m.success);
      stream.next(m.status_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetJointPropertiesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::GetJointPropertiesResponse_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "damping[]" << std::endl;
    for (size_t i = 0; i < v.damping.size(); ++i)
    {
      s << indent << "  damping[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.damping[i]);
    }
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "rate[]" << std::endl;
    for (size_t i = 0; i < v.rate.size(); ++i)
    {
      s << indent << "  rate[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.rate[i]);
    }
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "status_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.status_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_GETJOINTPROPERTIESRESPONSE_H
