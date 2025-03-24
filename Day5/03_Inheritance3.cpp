///*
//	3. 상속관계에서 이니셜라이즈 사용하기
//*/
//#include <iostream>
//
//class Car {
//private:
//	int gasolineGauge;
//public:
//	Car(int ag) : gasolineGauge(ag){}				// 콜론초기화
//	int getGasGauge() { return gasolineGauge; }
//};
//class HybirdCar : public Car {
//private:
//	int electricGauge;
//public:
//	HybirdCar(int ag, int ae) : Car(ag), electricGauge(ae) { }
//	int getElecGauge() { return electricGauge; }
//};
//class HybirdWaterCar : public HybirdCar {
//	int waterGauge;
//public:
//	/* 상속이 연속으로 일어나면 부모 클래스를 호출하면 조부모 클래스 인자까지 적는다 */
//	HybirdWaterCar(int ag, int ae, int aw) : HybirdCar(ag, ae), waterGauge(aw){}
//	void showGauge() {
//		std::cout << "잔여 가솔린: " << getGasGauge() << std::endl;
//		std::cout << "잔여 전기량: " << getElecGauge() << std::endl;
//		std::cout << "잔여 워터량: " << waterGauge << std::endl;
//	 }
//};
//
//int main()
//{
//	HybirdWaterCar hwc(10, 20, 30);
//	hwc.showGauge();
//
//	return 0;
//}