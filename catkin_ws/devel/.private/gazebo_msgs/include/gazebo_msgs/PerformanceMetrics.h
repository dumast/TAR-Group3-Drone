// Generated by gencpp from file gazebo_msgs/PerformanceMetrics.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_PERFORMANCEMETRICS_H
#define GAZEBO_MSGS_MESSAGE_PERFORMANCEMETRICS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <gazebo_msgs/SensorPerformanceMetric.h>

namespace gazebo_msgs
{
template <class ContainerAllocator>
struct PerformanceMetrics_
{
  typedef PerformanceMetrics_<ContainerAllocator> Type;

  PerformanceMetrics_()
    : header()
    , real_time_factor(0.0)
    , sensors()  {
    }
  PerformanceMetrics_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , real_time_factor(0.0)
    , sensors(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _real_time_factor_type;
  _real_time_factor_type real_time_factor;

   typedef std::vector< ::gazebo_msgs::SensorPerformanceMetric_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::gazebo_msgs::SensorPerformanceMetric_<ContainerAllocator> >> _sensors_type;
  _sensors_type sensors;





  typedef boost::shared_ptr< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> const> ConstPtr;

}; // struct PerformanceMetrics_

typedef ::gazebo_msgs::PerformanceMetrics_<std::allocator<void> > PerformanceMetrics;

typedef boost::shared_ptr< ::gazebo_msgs::PerformanceMetrics > PerformanceMetricsPtr;
typedef boost::shared_ptr< ::gazebo_msgs::PerformanceMetrics const> PerformanceMetricsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator1> & lhs, const ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.real_time_factor == rhs.real_time_factor &&
    lhs.sensors == rhs.sensors;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator1> & lhs, const ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "884f71fd5037b886ec5e126b83c4425a";
  }

  static const char* value(const ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x884f71fd5037b886ULL;
  static const uint64_t static_value2 = 0xec5e126b83c4425aULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/PerformanceMetrics";
  }

  static const char* value(const ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"float64 real_time_factor\n"
"gazebo_msgs/SensorPerformanceMetric[] sensors\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: gazebo_msgs/SensorPerformanceMetric\n"
"string name\n"
"float64 sim_update_rate\n"
"float64 real_update_rate\n"
"float64 fps\n"
;
  }

  static const char* value(const ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.real_time_factor);
      stream.next(m.sensors);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PerformanceMetrics_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::PerformanceMetrics_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "real_time_factor: ";
    Printer<double>::stream(s, indent + "  ", v.real_time_factor);
    s << indent << "sensors[]" << std::endl;
    for (size_t i = 0; i < v.sensors.size(); ++i)
    {
      s << indent << "  sensors[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gazebo_msgs::SensorPerformanceMetric_<ContainerAllocator> >::stream(s, indent + "    ", v.sensors[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_PERFORMANCEMETRICS_H
