public class Solution
{
    public int DistanceTraveled(int mainTank, int additionalTank)
    {
        // 初始化行驶距离
        int distance = 0;

        // 如果mainTank小于5，直接返回mainTank乘以10
        if (mainTank < 5)
        {
            return mainTank * 10;
        }

        // 当mainTank大于等于5且additionalTank大于等于1
        while (mainTank >= 5 && additionalTank >= 1)
        {
            // 为每5个mainTank增加行驶距离
            distance += 5 * 10;
            // mainTank减少5
            mainTank -= 5;
            // additionalTank减少1并增加给mainTank
            additionalTank -= 1;
            mainTank += 1;
        }

        // 处理剩下的mainTank部分
        distance += mainTank * 10;

        return distance;
    }
}
