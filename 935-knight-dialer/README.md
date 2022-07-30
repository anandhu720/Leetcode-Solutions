<h2><a href="https://leetcode.com/problems/knight-dialer/">935. Knight Dialer</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The chess knight has a <strong style="user-select: auto;">unique movement</strong>,&nbsp;it may move two squares vertically and one square horizontally, or two squares horizontally and one square vertically (with both forming the shape of an <strong style="user-select: auto;">L</strong>). The possible movements of chess knight are shown in this diagaram:</p>

<p style="user-select: auto;">A chess knight can move as indicated in the chess diagram below:</p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/18/chess.jpg" style="width: 402px; height: 402px; user-select: auto;">
<p style="user-select: auto;">We have a chess knight and a phone pad as shown below, the knight <strong style="user-select: auto;">can only stand on a numeric cell</strong>&nbsp;(i.e. blue cell).</p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/18/phone.jpg" style="width: 242px; height: 322px; user-select: auto;">
<p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code>, return how many distinct phone numbers of length <code style="user-select: auto;">n</code> we can dial.</p>

<p style="user-select: auto;">You are allowed to place the knight <strong style="user-select: auto;">on any numeric cell</strong> initially and then you should perform <code style="user-select: auto;">n - 1</code> jumps to dial a number of length <code style="user-select: auto;">n</code>. All jumps should be <strong style="user-select: auto;">valid</strong> knight jumps.</p>

<p style="user-select: auto;">As the answer may be very large, <strong style="user-select: auto;">return the answer modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1
<strong style="user-select: auto;">Output:</strong> 10
<strong style="user-select: auto;">Explanation:</strong> We need to dial a number of length 1, so placing the knight over any numeric <lclighter data-id="lgt256990322" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; user-select: auto;">ce</lclighter><div class="LinerThreadIcon LinerFirst " data-highlight-id="256990322" data-bundle-id="0" id="lgt256990322" style="background-image: url(&quot;https://photo.getliner.com/liner-service-bucket/user_photo_default/color-8/D.svg&quot;); user-select: auto;">
        <div class="LinerThreadIcon__dim" style="user-select: auto;"></div>
        <div class="LinerThreadIcon__mentioned" style="user-select: auto;">
          <div class="LinerThreadIcon__mentionedImg" style="user-select: auto;"></div>
        </div>
        <div class="LinerThreadIcon__onlyMe" style="user-select: auto;">
          <div class="LinerThreadIcon__onlyMeImg" style="user-select: auto;"></div>
        </div>
      </div>ll of the 10 cells is sufficient.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
<strong style="user-select: auto;">Output:</strong> 20
<strong style="user-select: auto;">Explanation:</strong> All the valid number we can dial are [04, 06, 16, 18, 27, 29, 34, 38, 40, 43, 49, 60, 61, 67, 72, 76, 81, 83, 92, 94]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3131
<strong style="user-select: auto;">Output:</strong> 136006598
<strong style="user-select: auto;">Explanation:</strong> Please take care of the mod.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 5000</code></li>
</ul>
</div>