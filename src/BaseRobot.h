
#ifndef BASEROBOT_H
#define BASEROBOT_H

#include "Conjunto.h"
#include "Articulacion.h"
#include "ActuadorLineal.h"
#include "efectorfinal.h"

#include <vector>
#include <string>

using std::string;

class BaseRobot : public Conjunto {
public:
    BaseRobot(int ID, bool t, string ip);
    BaseRobot(int ID, bool t, string ip, Qt3DCore::QEntity * rootEntity, QUrl url);
    ~BaseRobot();
    void inicio(Qt3DCore::QEntity * rootEntity);
    bool getEstado() const;
    void setEstado(bool estado);
    string getIp_data() const;
    void setIp_data(string ip_data);

    //
    Articulacion * articulacion1;
    Articulacion * articulacion2;
    ActuadorLineal * ActLineal;
    EfectorFinal * EfectorF;

private:
    bool estado;
    string ip_data;

};

#endif /* BASEROBOT_H */
