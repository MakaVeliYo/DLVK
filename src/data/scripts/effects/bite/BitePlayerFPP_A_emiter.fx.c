EmiterDef()
{
 Meter()
 Space("world")
 GenType("continous")
 GenArea("point")
 
 LifeTime()
 {
  keyf(0.1,0.1)
 }
 ParticleRate()
 {
  keyf(0.2,0.0)
  keyf(0.1,0.3)
 }
 StartVelocityRand()
 {
  keyv(0.2,0.9,0.0,0.3)
 }
 FromEmiterVelocity()
 {
  keyf(0.0,0.1)
 }
 Direction()
 {
  keyv(0.0,0.0,0.0,-1.0)
 }
 TurnOffDistance()
 {
  keyf(0.8,0.2)
 }
return 0;  
}
