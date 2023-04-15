/**
 * @file /include/class1_ros_qt_demo/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

//#ifndef class1_ros_qt_demo_QNODE_HPP_
//#define class1_ros_qt_demo_QNODE_HPP_
#ifndef robot_hmi_QNODE_HPP_
#define robot_hmi_QNODE_HPP_
/*****************************************************************************
** Includes
*****************************************************************************/

// To workaround boost/qt4 problems that won't be bugfixed. Refer to
//    https://bugreports.qt.io/browse/QTBUG-22829
#ifndef Q_MOC_RUN
#include <ros/ros.h>
#endif
#include <string>
#include <QThread>
#include <QStringListModel>
#include <std_msgs/String.h>
#include <map>
#include <geometry_msgs/Twist.h>
#include <nav_msgs/Odometry.h>
/*****************************************************************************
** Namespaces
*****************************************************************************/

//namespace class1_ros_qt_demo {
namespace robot_hmi{

/*****************************************************************************
** Class
*****************************************************************************/

class QNode : public QThread {
    Q_OBJECT
public:
	QNode(int argc, char** argv );
	virtual ~QNode();
	bool init();
	bool init(const std::string &master_url, const std::string &host_url);
	void run();
    void set_cmd_vel(char k,float linear,float angular);
	/*********************
	** Logging
	**********************/
	enum LogLevel {
	         Debug,
	         Info,
	         Warn,
	         Error,
	         Fatal
	 };

	QStringListModel* loggingModel() { return &logging_model; }
	void log( const LogLevel &level, const std::string &msg);

Q_SIGNALS:
	void loggingUpdated();
    void rosShutdown();
    void speed_vel(float,float);

private:
	int init_argc;
	char** init_argv;
	ros::Publisher chatter_publisher;
    QStringListModel logging_model;

    //add
    ros::Subscriber chatter_sub;
    ros::Subscriber odom_sub;
    //回调函数
    void chatter_callback(const std_msgs::String &msg);
    void odom_callback(const nav_msgs::Odometry &msg);
    ros::Publisher cmd_vel_pub;
};

}  // namespace class1_ros_qt_demo

#endif /* class1_ros_qt_demo_QNODE_HPP_ */
